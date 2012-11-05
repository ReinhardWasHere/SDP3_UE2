#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include "PersonReader.h"
#include "AdressManager.h"


PersonReader::~PersonReader()
{
}

void PersonReader::Read(std::string const& filename, AdressManager* adressManager)
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

		while(!file.eof())
		{
			getline(file,buffer);
			if ((buffer != "") && (buffer[0] != '#'))
			{
				Person* person = new Person;

				pos = buffer.find_first_of(' ');
				person->SetFirstName(buffer.substr(0,pos));
				buffer.erase(0,pos+1);

				pos = buffer.find_first_of(' ');
				person->SetLastName(buffer.substr(0, pos));
				buffer.erase(0,pos+1);

				size_t index;
				std::stringstream (buffer) >> index;	//make string to size_t
				person->SetIndex(index);

				adressManager->AddPerson(person);
			}
		}
		file.close();
	}
	catch(std::string const& ex)
	{
		std::cerr << "PersonReader.cpp::Read: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "PersonReader.cpp::Read: Unknown Exception occured" << std::endl;
	}
}