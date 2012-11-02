#ifndef PERSON_H
#define PERSON_H

#include "AdressManager.h"
#include "Adress.h"

class Person :
	public Object 
{
private:
	size_t mIndex;
	std::string mFirstName;
	std::string mLastName;
}

#endif