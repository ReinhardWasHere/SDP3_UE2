///////////////////////////////////////////////////////////////////////////
// Workfile : AdressManager.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Header of AdressManager.cpp
///////////////////////////////////////////////////////////////////////////

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
	~AdressManager();
	void AddAdress(Adress* adress);
	void AddPerson(Person * person);
	void LinkAdresses();
	void ReadFile(std::string const& filename, Reader* reader);
	void WriteAdresses(std::string const& filename, Writer* writer) const;
	void AdressManager::ClearAdressList();
	bool IsAdressListEmpty() const;

private:
	TAdresses mAdresses;
	TPersons mPersons;
};

#endif