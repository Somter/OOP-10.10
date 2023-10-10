#pragma once
#include "Exception.h"
class IndexEception: public Exception
{
public:
	IndexEception(const char* mes);
	virtual const char* GetMessage() const;
};

