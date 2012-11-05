///////////////////////////////////////////////////////////////////////////
// Workfile : Person.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Definition of methods of class Person
///////////////////////////////////////////////////////////////////////////

#include "Person.h"

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