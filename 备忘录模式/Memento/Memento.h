#ifndef MEMENTO_H
#define MENENTO_H


#define  SetGetValue(type,name)\
    private: type m_##name;\
	public: type Get##name() const {return this->m_##name;}\
	public: void Set##name(type _arg){this->m_##name=_arg;}

//#define SetGetValue(type,name)\
//	private:type m_##name;\
//	public:type Get##name() const {return this->m_##name;}\
//	public:void Set##name(type _arg){this->m_##name=_arg;}

class RoleStateMemenyo;
class GamePlayer
{
public:
	GamePlayer(){}
	~GamePlayer(){}
public:
	RoleStateMemenyo * StateSave();
	{
		return new RoleStateMemenyo(nAtk,nVit,nDeg)
	}
	RecoveryState(const RoleStateMemenyo * state)
	{
		//nAtk = state->
	}
private:
	int nAtk;
	int nVit;
	int nDef;
};

class RoleStateMemenyo 
{
public:
	RoleStateMemenyo(int atk,int vit,int def)
	{
		nAtk= atk;
		nVit= vit;
		nDef= def;
	}
	SetGetValue(int,nAtk);
	SetGetValue(int,nVit);
	SetGetValue(int,nDef);
	~RoleStateMemenyo(){}
private:
	//int nAtk;
	//int nVit;
	//int nDef;
};


class RoleStateCreater
{
public:
	RoleStateCreater(){}
	~RoleStateCreater(){}
public:
	SetGetValue(RoleStateMemenyo,Memen);
}
#endif