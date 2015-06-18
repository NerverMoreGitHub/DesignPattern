#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <vector>

class Barbecuer
{
public:
	Barbecuer(){}
	~Barbecuer(){}
public:
	void BakeMutton(){
		std::cout<<"¿¾ÑòÈâ´®"<<std::endl;
	}
	void BakeChickenWing(){
		std::cout<<"¿¾¼¦³á"<<std::endl;
	}
};

class Command
{
public:
	 Command(Barbecuer * receiver)
	 {
		 m_receiver = receiver;
	 }
	 ~Command(){}
	 virtual void ExcuteCommand() = 0;
protected:
	Barbecuer *m_receiver;
};

class BakeMuttonCommand : public Command
{
public:
	BakeMuttonCommand(Barbecuer * receiver) : Command(receiver)
	{

	}
	~BakeMuttonCommand(){}
public:
	void ExcuteCommand(){
		m_receiver->BakeMutton();
	}
};

class BakeChickenWingCommand : public Command
{
public:
	BakeChickenWingCommand(Barbecuer * receiver) : Command(receiver)
	{

	}
	~BakeChickenWingCommand(){}
public:
	void ExcuteCommand(){
		m_receiver->BakeChickenWing();
	}
};

class Waiter
{
public:
	Waiter(){}
	~Waiter(){}
public:
	void SetOrder(Command * command){
		m_commands.push_back(command);
	}
	void Notify()
	{
		for(int i = 0 ;i<m_commands.size();i++)
		m_commands[i]->ExcuteCommand();
	}
private:
	std::vector<Command *> m_commands;
};
#endif