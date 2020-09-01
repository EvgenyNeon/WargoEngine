#pragma once

#include <string>
#include <list>

class WGTypeObject;

class WGTypeValue
{
};

class WGInteger : public WGTypeValue
{
	int32_t value;
};

class WGFloat : public WGTypeValue
{
	float value;
};

class WGString : public WGTypeValue
{
	std::string value;
};

class WGChar : public WGTypeValue
{
	char value;
};

class WGBool : public WGTypeValue
{
	bool value;
};

class WGStruct : public WGTypeValue
{
	std::list<WGTypeObject> StructProperties;
};

class WGClass : public WGTypeValue
{
	std::list<WGTypeObject> ClassProperties;
};

class WGEnum : public WGTypeValue
{

};

class WGStatement : public WGTypeValue
{
	WGStatement* NextStatement = nullptr;
};


