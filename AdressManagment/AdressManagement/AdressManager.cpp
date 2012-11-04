#include <string>
#include <algorithm>
#include <iostream>
#include "AdressManager.h"


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
	try
	{
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