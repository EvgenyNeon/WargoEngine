#pragma once

#include <string>

enum class WGTypeEnum
{
	INTEGER,
	FLOAT,
	STRING,
	CHAR,
	BOOL,
	STRUCT,
	CLASS,
	ENUM,
	MAX_TYPE_ENUM
};

enum class WGDataFormat
{
	VARIABLE,
	ARRAY,
	LIST,
	MAP,
	SET,
	QUEUE,
	STACK
};

class WGTypeDescriptor
{
	WGTypeEnum TypeEnum;
	WGDataFormat DataFormat;
	std::string TypeName;
	int64_t TypeID;
};

