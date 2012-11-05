///////////////////////////////////////////////////////////////////////////
// Workfile : Adress.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Definition of methods of class Adress
///////////////////////////////////////////////////////////////////////////

#include "Adress.h"

Adress::~Adress()
{
	TPersonsItor itor = mPersons.begin();

	while (itor != mPersons.end())
	{
		delete (*itor);
		++itor;
	}
}

void Adress::AddPerson(Person* person)
{
	mPersons.push_back(person);
}

size_t Adress::GetZipCode() const
{
	return mZipCode;
}

std::string Adress::GetCity() const
{
	return mCity;
}

std::string Adress::GetStreet() const
{
	return mStreet;
}

size_t Adress::GetHouseNumber() const
{
	return mHouseNumber;
}

TPersons const * Adress::GetPersons() const
{
	return &mPersons;
}

void Adress::SetZipCode(size_t const& zipCode)
{
	mZipCode = zipCode;
}

void Adress::SetCity(std::string const& city)
{
	mCity = city;
}

void Adress::SetStreet(std::string const& street)
{
	mStreet = street;
}

void Adress::SetHouseNumber(size_t houseNumber)
{
	mHouseNumber = houseNumber;
}

void Adress::SetPersons(TPersons persons)
{
	mPersons = persons;
}