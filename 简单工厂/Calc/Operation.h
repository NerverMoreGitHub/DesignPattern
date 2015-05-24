#ifndef OPERATION_H
#define OPERATION_H
#include <string>

#define  SetGetValue(type,name)\
    private: type m_##name;\
	public: type get##name() const {return this->m_##name;}\
	public: void set##name(type _arg){this->m_##name=_arg;}
typedef enum _EN_OPERATER_TYPE
{
	EN_OPERATER_ADD = 0,
	EN_OPERATER_SUB,
	EN_OPERATER_MUL,
	EN_OPERATER_DIV
} EN_OPERATER_TYPE;

class Operation
{
public:
	Operation();
	~Operation();
public:
	SetGetValue(double,NumberA);
	SetGetValue(double,NumberB);
	virtual double GetResult();
private:
	double NumberA;
	double NumberB;
};


class OperationAdd : public Operation
{
public:
	OperationAdd();
	~OperationAdd();
public:
	 double GetResult();
};

class OperationSub : public Operation
{
public:
	OperationSub();
	~OperationSub();
public:
	 double GetResult();
};

class OperationMul : public Operation
{
public:
	OperationMul();
	~OperationMul();
public:
	 double GetResult();
};

class OperationDiv : public Operation
{
public:
	OperationDiv();
	~OperationDiv();
public:
	 double GetResult();
};


class OperationFactry
{
public:
	OperationFactry(){};
	~OperationFactry(){};
public:
	Operation * CreateOperation(std::string strOperation);
private:
	EN_OPERATER_TYPE ChangString2Type(std::string operation);
};

#endif