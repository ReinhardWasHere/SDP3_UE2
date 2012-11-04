#ifndef ADRESSMANAGER_H
#define ADRESSMANAGER_H

#include <string>
#include <list>
#include <iterator>
#include "Object.h"
#include "Adress.h"
#include "Person.h"
#include "Writer.h"
#include "Reader.h"

class AdressManager :
	public Object
{
public:
	void AddAdress(Adress* adress);
	void AddPerson(Person * person);
	void LinkAdresses();
	void ReadFile(std::string const& filename, Reader* reader);
	void WriteAdresses(std::string const& filename, Writer* writer);

private:
	TAdresses mAdresses;
	TPersons mPersons;
};

#endif