#include <string>
#include <sstream>
#include <fstream>
#include "PersonReader.h"
#include "Scanner\scanner.h"
#include "AdressManager.h"

using namespace std;

PersonReader::~PersonReader()
{
}

void PersonReader::Read(std::string const& filename, AdressManager* adressManager)
{
	ifstream file(filename);
    std::string buffer;

	size_t pos = 0;	//help variable
	

	while(!file.eof())
	{
		getline(file,buffer);
		if (buffer[0] != '#')
		{
			Person* person = new Person;
			
			pos = buffer.find_first_of(' ');
			person->SetFirstName(buffer.substr(0,pos));
			buffer.erase(0,pos+1);
			
			pos = buffer.find_first_of(' ');
			person->SetLastName(buffer.substr(0, pos));
			buffer.erase(0,pos+1);
			
			size_t index;
			stringstream (buffer) >> index;	//make string to size_t
			person->SetIndex(index);

			adressManager->AddPerson(person);
			delete person; person = 0;
		}
	}
    file.close();
}