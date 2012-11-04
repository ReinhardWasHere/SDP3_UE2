#include "Adress.h"

Adress::Adress()
{
}

Adress::~Adress()
{
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

std::string Adress::GetHouseNumber() const
{
	return mHouseNumber;
}

TPersons const * Adress::GetPersons() const
{
	return &mPersons;
}