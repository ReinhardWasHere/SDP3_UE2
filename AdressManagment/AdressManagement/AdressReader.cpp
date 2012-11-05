///////////////////////////////////////////////////////////////////////////
// Workfile : AdressReader.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Definition of methods of class AdressReader
///////////////////////////////////////////////////////////////////////////

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include "AdressReader.h"
#include "AdressManager.h"

AdressReader::~AdressReader()
{
}

void AdressReader::Read(std::string const& filename, AdressManager* adressManager)
{
	try
	{
		std::ifstream file(filename);
		std::string buffer;
		size_t pos = 0;	//help variable

		if (!file.is_open())
		{
			std::string ex("File couldn't be opened");
			throw(ex);
		}

		if (!adressManager->IsAdressListEmpty())
		{
			adressManager->ClearAdressList();
		}

		while(!file.eof())
		{
			getline(file,buffer);
			// not an empty string
			if ((buffer != "") && (buffer[0] != '#'))	
			{
				Adress* adress = new Adress;

				pos = buffer.find_first_of(' ');
				adress->SetStreet(buffer.substr(0,pos));
				buffer.erase(0,pos+1);

				pos = buffer.find_first_of(' ');
				size_t houseNumber;
				std::stringstream (buffer) >> houseNumber;
				adress->SetHouseNumber(houseNumber);
				buffer.erase(0,pos+1);

				pos = buffer.find_first_of(' ');
				adress->SetCity(buffer.substr(0,pos));
				buffer.erase(0,pos+1);

				pos = buffer.find_first_of(' ');
				size_t zipCode;
				std::stringstream (buffer) >> zipCode;
				adress->SetZipCode(houseNumber);

				adressManager->AddAdress(adress);
			}
		}
		file.close();
	}
	catch(std::string const& ex)
	{
		std::cerr << "AdressReader.cpp::Read: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "AdressReader.cpp::Read: Unknown Exception occured" << std::endl;
	}
}