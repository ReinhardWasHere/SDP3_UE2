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

void Person::SetIndex(size_t index)
{
	mIndex = index;
}

void Person::SetFirstName(std::string firstName)
{
	mFirstName = firstName;
}

void Person::SetLastName(std::string lastName)
{
	mLastName = lastName;
}