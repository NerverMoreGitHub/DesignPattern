#ifndef CASHCONTEXT_H
#define CASHCONTEXT_H


#include <string>
typedef enum _EN_CASH_TYPE
{
	EN_CASH_NORMAL = 0,
	EN_CASH_RESTURN,
	EN_CASH_REBATE

} EN_CASH_TYPE;

class Strategy
{
public:
	Strategy(){};
	~Strategy(){};
public:
	virtual double AlgorithmInterface(double lfCash) = 0;

};

class StrategyNormal :public Strategy
{
public:
	StrategyNormal(){}
	~StrategyNormal(){}
public:
	virtual double AlgorithmInterface(double lfCash);
};

class StrategyRebate : public Strategy
{
public:
	StrategyRebate(double lfIs);
	~StrategyRebate(){};
public:
	virtual double AlgorithmInterface(double lfCash);
private:
	double m_lfIs;
};

class StrategyReturn : public Strategy
{
public:
	StrategyReturn(double lfIs,double lfReturn);
	~StrategyReturn(){};
public:
	virtual double AlgorithmInterface(double lfCash);
private:
	double m_lfIs;
	double m_lfReturn;
};




class CashContext
{
public:
	CashContext(std::string strType);
	~CashContext();
public:
	double GetResult(double lfCash);
private:
	EN_CASH_TYPE ChangeString2Type(std::string);
	Strategy *m_Stratey;

};
#endif