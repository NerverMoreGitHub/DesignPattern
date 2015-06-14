#ifndef PERSONBUILDER_H
#define PERSONBUILDER_H

#include <string>

class Pen 
{
public:
	Pen(std::string color){m_color = color}
	~Pen(){}
private:
	std::string m_color;
};

class Graphics 
{
public:
	Graphics(){}
	~Graphics(){}
};



class PersonBuilder 
{
public:
	PersonBuilder(Pen pen,Graphics graphics){

		m_Pen = pen;
		m_Graphics = graphics;
	}
	~PersonBuilder(){};
public:
	virtual void BuildHead() = 0 ;
	virtual void BuildBody() = 0;
	virtual void BuildArmLeft() = 0;
	virtual void BuildArmRight() = 0;
	virtual void BuildLegLeft() = 0 ;
	virtual void BuildLegRight() = 0 ;
private:
	Pen m_Pen;
	Graphics m_Graphics;

};

class PersonThinBuilder : public PersonBuilder
{
public:
	void BuildHead(){}
	void BuildBody(){}
	void BuildArmLeft(){}
	void BuildArmRight(){}
	void BuildLegLeft(){}
	void BuildLegRight(){}
};

class PersonFatBuilder : public PersonBuilder
{
public:
	void BuildHead(){}
	void BuildBody(){}
	void BuildArmLeft(){}
	void BuildArmRight(){}
	void BuildLegLeft(){}
	void BuildLegRight(){}
};

class PersonBuilderDirector 
{
public:
	PersonBuilderDirector(PersonBuilder *builder){
		m_builder = builder;
	}
	~PersonBuilderDirector(){}
public:
	void CreatePerson(){
		m_builder->BuildHead();
		m_builder->BuildBody();
		m_builder->BuildArmLeft();
		m_builder->BuildArmRight();
		m_builder->BuildLegLeft();
		m_builder->BuildLegRight();
	}
private:
	PersonBuilder *m_builder;
};
#endif