#ifndef ADRESS_H
#define ADRESS_H

#include <string>
#include <list>
#include "Object.h"
#include "Person.h"

//#include "AdressManager.h"
//#include "IAdressManagerReader.h"

typedef std::list<Person*> TPersons;
typedef TPersons::const_iterator TPersonsItor;

class Adress :
	public Object
{
public:
	Adress();
	~Adress();

	void AddPerson(Person* person);

	size_t GetZipCode() const;
	std::string GetCity() const;
	std::string GetStreet() const;
	std::string GetHouseNumber() const;
	TPersons const * GetPersons() const;
private:
	size_t mZipCode;
	std::string mCity;
	std::string mStreet;
	std::string mHouseNumber;
	TPersons mPersons;
};



#endif