// Iterator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Iterator.h"

template <class Item>
ListIterator<Item>::ListIterator(std::vector<Item> aList) : _list(aList),__current(0)
{
	
}
template <class Item>
void ListIterator<Item>::First()
{
	__current = 0;
}

template <class Item>
void ListIterator<Item>::Next()
{
	__current++;
}

template <class Item>
bool ListIterator<Item>::IsDone()
{
	return (__current>=_list.size());
}

template <class Item>
Item ListIterator<Item>::CurrentItem()
{
	if(!IsDone())
	return _list[__current];
}



template <class Item>
ReverseListIterator<Item>::ReverseListIterator(std::vector<Item> aList) : _list(aList),__current(aList.size()-1)
{

}
template <class Item>
void ReverseListIterator<Item>::First()
{
	__current = _list.size()-1;
}

template <class Item>
void ReverseListIterator<Item>::Next()
{
	__current--;
}

template <class Item>
bool ReverseListIterator<Item>::IsDone()
{
	return (__current<0);
}

template <class Item>
Item ReverseListIterator<Item>::CurrentItem()
{
	if(!IsDone())
		return _list[__current];
}



int _tmain(int argc, _TCHAR* argv[])
{
	Employees w(21);
	Employees ww(22);
	Employees www(23);

	std::vector<Employees> em;em.push_back(w);em.push_back(ww);em.push_back(www);
	ListIterator<Employees> foward(em);

	ReverseListIterator<Employees> backward(em);

	for(foward.First();!foward.IsDone();foward.Next())
		foward.CurrentItem().Print();

	for(backward.First();!foward.IsDone();foward.Next())
		foward.CurrentItem().Print();
	return 0;
}

