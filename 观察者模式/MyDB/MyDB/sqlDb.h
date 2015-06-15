#ifndef SQLDB_H
#define SQLDB_H


#include <string>

//用户插入和获取接口
class IUser
{
public:
	virtual void InsertUser(std::string str) = 0;
	virtual std::string GetUser(int nId) = 0;
};

class SqlServerUser : public IUser
{
public:
	SqlServerUser(){}
	~SqlServerUser(){}
public:
	void InsertUser(std::string str);
	std::string GetUser(int nId);
};

class AccessUser : public IUser
{
public:
	AccessUser(){}
	~AccessUser(){}
public:
	void InsertUser(std::string str);
	std::string GetUser(int nId);
};


//部门表
class IDepartment
{
public:
	virtual void InsertDepartment(std::string str) = 0;
	virtual std::string GetDepartment(int nId) = 0;
};

class SqlServerDepartment : public IDepartment
{
public:
	SqlServerDepartment(){}
	~SqlServerDepartment(){}
public:
	void InsertDepartment(std::string str);
	std::string GetDepartment(int nId);
};

class AccessDepartment : public IDepartment
{
public:
	AccessDepartment(){}
	~AccessDepartment(){}
public:
	void InsertDepartment(std::string str);
	std::string GetDepartment(int nId);
};

//工厂接口
class IFactory 
{
	virtual IUser * CreateUser() = 0 ;
	virtual IDepartment * CreateDepartMent() = 0;
};

class SqlServerFactory : public IFactory
{
public:
	SqlServerFactory(){}
	~SqlServerFactory();
public:
	IUser * CreateUser(){
		return new SqlServerUser;
	}
	IDepartment * CreateDepartMent(){
		return new SqlServerDepartment;
	}
};

class AccessFactory : public IFactory
{
public:
	AccessFactory(){}
	~AccessFactory();
public:
	IUser * CreateUser(){
		return new AccessUser;
	}

	IDepartment * CreateDepartMent(){
		return new AccessDepartment;
	}
};

class DataAccess
{
public:
	DataAccess(std::string);
	~DataAccess();
public:
	IUser *CreateUser();
	IDepartment *CreateDepartMent();
};
#endif