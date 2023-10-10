#include "IndexEception.h"

IndexEception::IndexEception(const char* mes) :Exception(mes) {}

const char* IndexEception::GetMessage() const
{
	return m_message;
}
