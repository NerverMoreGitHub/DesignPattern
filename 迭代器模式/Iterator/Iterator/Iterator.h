#ifndef ITEEAROR_H
#define ITEEAROR_H
#include <vector>
#include <iostream>

template<class Item>
class Iterator
{
protected:
	Iterator(){}
	~Iterator(){}
public:
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() = 0;
	virtual Item CurrentItem() = 0;
};

template <class Item>
class ListIterator : public Iterator<Item>
{
public:
	ListIterator(std::vector<Item> aList);
	 void First();
	 void Next();
	 bool IsDone();
	 Item CurrentItem();
private:
	std::vector<Item> _list;
	long __current;
};

template <class Item>
class ReverseListIterator : public Iterator<Item>
{
public:
	ReverseListIterator(std::vector<Item> aList);
	void First();
	void Next();
	bool IsDone();
	Item CurrentItem();
private:
	std::vector<Item> _list;
	long __current;
};

template <class Item>
class AbstractList
{
	virtual Iterator<Item *> CreateIterator() const = 0;
};

class Employees
{
public:
	Employees(int age){
		m_AGE = age;
	};
	~Employees(){}
	void Print(){
		std::cout<<"MY AGE IS :"<<m_AGE<<std::endl;
	}
private:
	int m_AGE;
};
#endif