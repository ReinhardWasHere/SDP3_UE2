#ifndef ADRESSMANAGER_H
#define ADRESSMANAGER_H

#include <list>
#include "IAdressManagerReader.h"
#include "Object.h"
#include "Adress.h"
#include "Person.h"
#include "Writer.h"
#include "Reader.h"

typedef std::list<Adress*>  TAdresses;
typedef TAdresses::iterator TAdressesItor;
typedef std::list<Person*>  TPersons;
typedef TPersons::iterator  TPersonsItor;

class AdressManager :
	public Object,
	public IAdressManagerReader
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
}

#endif