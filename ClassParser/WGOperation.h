#pragma once
#include <queue>
#include <map>
#include <list>
#include <string>

class WGTypeDescriptor;
class WGTypeObject;
class WGOperation;

class WGOperationDescriptor
{
public:
	template <typename T> WGOperation* CreateInstance();
protected:
	void SetInputParameterDesc(std::string parameter_name, WGTypeDescriptor* parameter);
	WGTypeDescriptor* GetInputParameterDesc(std::string parameter_name);
	void SetOutputParameterDesc(std::string parameter_name, WGTypeDescriptor* parameter);
	WGTypeDescriptor* GetOutputParameterDesc(std::string parameter_name);
	std::list<std::string> GetInputParametersNames();
	std::list<std::string> GetOutputParametersNames();
private:
	std::string OperationName;
	std::map<std::string, WGTypeDescriptor*> InputParametersDesc;
	std::map<std::string, WGTypeDescriptor*> OutputParametersDesc;
};

class WGOperation
{
	friend class WGOperationDescriptor;
public:
	void Execute();
protected:

private:
	WGOperationDescriptor* OperationDescriptor;
	std::map<std::string, WGTypeObject*> InputParameters;
	std::map<std::string, WGTypeObject*> OutputParameters;
};

class WGOperationTree
{
public:

protected:

private:
	std::queue<WGOperation*> Operations;
};

class WGFunction : public WGOperation, WGOperationTree
{
public:

protected:

private:
};



