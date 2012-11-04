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
