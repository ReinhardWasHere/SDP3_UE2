#include <string>
#include <algorithm>
#include <iostream>
#include "AdressManager.h"


//Compares to Indexes of a Person
//True if (Index1 < Index2)
bool IndexPred(Person* p1, Person* p2);

void AdressManager::AddAdress(Adress* adress)
{
	mAdresses.push_back(adress);
}

void AdressManager::AddPerson(Person * person)
{
	mPersons.push_back(person);
}

bool IndexPred(Person* p1, Person* p2)
{
	return p1->GetIndex() < p2->GetIndex();
}

void AdressManager::LinkAdresses()
{
	try
	{
	std::sort(mPersons.begin(),mPersons.end(),IndexPred);

	TPersonsItor itor = mPersons.begin();
	size_t AdressesSize = mAdresses.size();

	while (itor != mPersons.end())
	{
		TAdressesItor itorAdress = mAdresses.begin();
		size_t currIndex = (*itor)->GetIndex();
		if (AdressesSize <= currIndex)
		{
			std::string const ex("Index is bigger than the AdressList");
			throw(ex);
		}
		std::advance(itorAdress,(*itor)->GetIndex());

		(*itorAdress)->AddPerson(*itor);

		++itor;
	}
	}
	catch(std::string const& ex)
	{
		std::cerr << "AdressManager.cpp::LinkAdresses: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "AdressManager.cpp::LinkAdresses: Unknown Exception occured" << std::endl;
	}
}

void AdressManager::ReadFile(std::string const& filename, Reader* reader)
{
	reader->Read(filename,this);
}

void AdressManager::WriteAdresses(std::string const& filename, Writer* writer)
{
	writer->Write(filename,mAdresses);
}