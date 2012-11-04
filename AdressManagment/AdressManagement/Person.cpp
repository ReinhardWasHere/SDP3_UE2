#include "Person.h"

Person::Person()
{
}

Person::~Person()
{
}

size_t Person::GetIndex() const
{
	return mIndex;
}

std::string Person::GetFirstName() const
{
	return mFirstName;
}

std::string Person::GetLastName() const
{
	return mLastName;
}