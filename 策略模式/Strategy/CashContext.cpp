#include "stdafx.h"
#include "CashContext.h"

StrategyRebate::StrategyRebate(double lfIs)
{
	m_lfIs = lfIs;
}

StrategyReturn::StrategyReturn(double lfIs,double lfReturn)
{
	m_lfIs= lfIs;
	m_lfReturn = lfReturn;
}

CashContext::CashContext(std::string strType)
{
	m_Stratey = NULL;
	switch(ChangeString2Type(strType))
	{
	case EN_CASH_TYPE::EN_CASH_NORMAL:
		{
			m_Stratey = new StrategyNormal();
		}
		break;
	case EN_CASH_TYPE::EN_CASH_RESTURN:
		{
			m_Stratey = new StrategyRebate(0.8);
		}
		break;
	case EN_CASH_TYPE::EN_CASH_REBATE:
		{
			m_Stratey = new StrategyReturn(100,10);
		}
		break;

	}
}
CashContext::~CashContext()
{

}

EN_CASH_TYPE CashContext::ChangeString2Type(std::string strName)
{
	if(strName == "normal")
		return EN_CASH_TYPE::EN_CASH_NORMAL;
	else if(strName == "return")
		return EN_CASH_TYPE::EN_CASH_RESTURN;
	else if(strName == "rebate")
		return EN_CASH_TYPE::EN_CASH_REBATE;
}

double CashContext::GetResult(double lfCash)
{
	return m_Stratey->AlgorithmInterface(lfCash);
}

double StrategyNormal::AlgorithmInterface(double lfCash)
{
	return lfCash;
}

double StrategyRebate::AlgorithmInterface(double lfCash)
{
	return lfCash*m_lfIs;
}

double StrategyReturn::AlgorithmInterface(double lfCash)
{
	return lfCash-(lfCash/m_lfIs)*m_lfReturn;
}

