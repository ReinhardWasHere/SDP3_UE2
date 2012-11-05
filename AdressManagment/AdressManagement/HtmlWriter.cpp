///////////////////////////////////////////////////////////////////////////
// Workfile : HtmlWriter.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Definition of methods of class HtmlWriter
///////////////////////////////////////////////////////////////////////////

#include <string>
#include <iostream>
#include "HtmlWriter.h"

HtmlWriter::~HtmlWriter()
{
}

void HtmlWriter::Write(std::string const& filename, TAdresses const& adresses)
{
	try
	{
		std::ofstream stream;

		if (!OpenFile(filename,stream))
		{
			std::string ex("File couldn't be opened");
			throw(ex);
		}

		TAdressesItor itor = adresses.begin();

		stream << "<!DOCTYPE html>" << std::endl;
		stream << "<html>" << std::endl;
		stream << "<body>" << std::endl;
		stream << "<h1>" << header << "</h1>" << std::endl;
		stream << "<hr/>" << std::endl;

		while (itor != adresses.end())
		{
			WriteAdress(*itor, stream);

			++itor;
		}
		stream << "</body>" << std::endl;
		stream << "</html>" << std::endl;

		stream.close();
	}
	catch(std::string const& ex)
	{
		std::cerr << "HtmlWriter.cpp::Write: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "HtmlWriter.cpp::Write: Unknown Exception occured" << std::endl;
	}
}

void HtmlWriter::WriteAdress(Adress const * const adr, std::ofstream& stream)
{
	stream << "<p><i>" << adr->GetZipCode() << " " << adr->GetCity() << std::endl;
	stream << "<br/>" << adr->GetStreet() << " " << adr->GetHouseNumber() << "</i>" << std::endl;

	TPersons const * const persons = adr->GetPersons();
	TPersons::const_iterator person_itor = persons->begin();

	while (person_itor != persons->end())
	{
		WritePerson(*person_itor, stream);

		++person_itor;
	}
	stream << "<br/><br/>" << std::endl;
	stream << "</p>" << std::endl;
}

void HtmlWriter::WritePerson(Person const * const person, std::ofstream& stream)
{
	stream << "<br/>" << person->GetFirstName() << " " << person->GetLastName() << std::endl;
}