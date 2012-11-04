#include <string>
#include <sstream>
#include <fstream>
#include "AdressReader.h"
#include "AdressManager.h"

using namespace std;

AdressReader::~AdressReader()
{
}

void AdressReader::Read(std::string const& filename, AdressManager* adressManager)
{
	ifstream file(filename);
    std::string buffer;

	size_t pos = 0;	//help variable
	
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
			stringstream (buffer) >> houseNumber;
			adress->SetHouseNumber(houseNumber);
			buffer.erase(0,pos+1);
			
			pos = buffer.find_first_of(' ');
			adress->SetCity(buffer.substr(0,pos));
			buffer.erase(0,pos+1);

			pos = buffer.find_first_of(' ');
			size_t zipCode;
			stringstream (buffer) >> zipCode;
			adress->SetZipCode(houseNumber);
			buffer.erase(0,pos+1);

			adressManager->AddAdress(adress);
			delete adress; adress = 0;
		}
	}
    file.close();
}