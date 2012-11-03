#ifndef IADRESSMANAGERREADER_H
#define IADRESSMANAGERREADER_H

#include "Adress.h"
#include "Person.h"

class IAdressManagerReader 
{
public:
	virtual void AddAdress(Adress* adress) = 0;
	virtual void AddPerson(Person* person) = 0;
}

#endif