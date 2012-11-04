#include <string>
#include <iostream>
#include <fstream>
#include "PersonReader.h"
#include "Scanner\scanner.h"
#include "AdressManager.h"

PersonReader::~PersonReader()
{
}

void PersonReader::Read(std::string const& filename, AdressManager* adressManager)
{
	scanner scan;
	std::ifstream input(filename);
	scan.set_istream(input);

	size_t lastLine = scan.get_position().first;	//which line?
	size_t line = lastLine;

	
	while ((scan.get_string()[0] == '#') || (line == lastLine))
	{
		lastLine = line;
		scan.next_symbol();
		line = scan.get_position().first;
	}

	std::cout << scan.get_string() << std::endl;	//testen

	while (!scan.eof())
	{
		if (scan.symbol_is_identifier())
		{
			Person person;
			/*person.
			adressManager->AddPerson(
				scan.get_symbol()*/
		}
		scan.get_symbol();
		scan.get_string();
		scan.next_symbol();
	}


}