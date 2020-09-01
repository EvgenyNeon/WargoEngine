#pragma once

class WGTypeDescriptor;
class WGTypeValue;

class WGTypeObject
{
public:
	WGTypeObject(WGTypeDescriptor* type_descriptor, bool is_pointer = false);
protected:

private:
	WGTypeDescriptor* TypeDescriptor = nullptr;
	WGTypeValue* TypeValue = nullptr;
};
