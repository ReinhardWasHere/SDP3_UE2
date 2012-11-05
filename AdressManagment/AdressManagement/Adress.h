#ifndef ADRESS_H
#define ADRESS_H

#include <string>
#include <list>
#include "Object.h"
#include "Person.h"

typedef std::list<Person*> TPersons;
typedef TPersons::const_iterator TPersonsItor;

class Adress :
	public Object
{
public:
	~Adress();
	void AddPerson(Person* person);

	size_t GetZipCode() const;
	std::string GetCity() const;
	std::string GetStreet() const;
	size_t GetHouseNumber() const;
	TPersons const * GetPersons() const;

	void SetZipCode(size_t const& zipCode);
	void SetCity(std::string const& city);
	void SetStreet(std::string const& street);
	void SetHouseNumber(size_t houseNumber);
	void SetPersons(TPersons persons);
private:
	size_t mZipCode;
	std::string mCity;
	std::string mStreet;
	size_t mHouseNumber;
	TPersons mPersons;
};



#endif