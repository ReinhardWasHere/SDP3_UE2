///////////////////////////////////////////////////////////////////////////
// Workfile : AdressManager.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Definition of methods of class AdressManager
///////////////////////////////////////////////////////////////////////////

#include <string>
#include <algorithm>
#include <iostream>
#include "AdressManager.h"

AdressManager::~AdressManager()
{
	TAdressesItor itor = mAdresses.begin();

	while (itor != mAdresses.end())
	{
		delete (*itor);
		++itor;
	}
}


void AdressManager::AddAdress(Adress* adress)
{
	mAdresses.push_back(adress);
}

void AdressManager::AddPerson(Person * person)
{
	mPersons.push_back(person);
}

void AdressManager::LinkAdresses()
{
	TPersonsItor itor = mPersons.begin();
	size_t AdressesSize = mAdresses.size();

	while (itor != mPersons.end())
	{
		TAdressesItor itorAdress = mAdresses.begin();
		size_t currIndex = (*itor)->GetIndex();

		if (AdressesSize <= currIndex)
		{
			TPersonsItor itor_to_delete = itor;
			++itor;

			delete (*itor_to_delete);
			mPersons.erase(itor_to_delete);

			std::cerr << ("AdressManager.cpp::LinkAdresses: Index is bigger than the AdressList")
				<< std::endl;
		}
		else
		{
			std::advance(itorAdress,currIndex);

			(*itorAdress)->AddPerson(*itor);

			++itor;
		}
	}
}

void AdressManager::ReadFile(std::string const& filename, Reader* reader)
{
	reader->Read(filename,this);
}

void AdressManager::WriteAdresses(std::string const& filename, Writer* writer) const
{
	writer->Write(filename,mAdresses);
}

bool AdressManager::IsAdressListEmpty() const
{
	return mAdresses.empty();
}

void AdressManager::ClearAdressList()
{
	TAdressesItor itor = mAdresses.begin();

	while (itor != mAdresses.end())
	{
		delete (*itor);

		++itor;
	}
	mAdresses.clear();
}
