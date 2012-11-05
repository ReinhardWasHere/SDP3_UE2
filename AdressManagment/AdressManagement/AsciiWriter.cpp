#include <string>
#include <iostream>
#include "AsciiWriter.h"

AsciiWriter::~AsciiWriter()
{
}

void AsciiWriter::Write(std::string const& filename, TAdresses const& adresses)
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

		stream << header << std::endl;
		stream << line << std::endl;

		while (itor != adresses.end())
		{
			WriteAdress(*itor, stream);

			++itor;
		}
		stream.close();
	}
	catch(std::string const& ex)
	{
		std::cerr << "AsciiWriter.cpp::Write: " << ex << std::endl;
	}
	catch(...)
	{
		std::cerr << "AsciiWriter.cpp::Write: Unknown Exception occured" << std::endl;
	}
}

void AsciiWriter::WriteAdress(Adress const * const adr, std::ofstream& stream)
{
	stream << adr->GetZipCode() << " " << adr->GetCity() << std::endl;
	stream << adr->GetStreet() << " " << adr->GetHouseNumber() << std::endl;

	TPersons const * const persons = adr->GetPersons();
	TPersons::const_iterator person_itor = persons->begin();

	while (person_itor != persons->end())
	{
		WritePerson(*person_itor, stream);

		++person_itor;
	}
	stream << std::endl << std::endl;
}

void AsciiWriter::WritePerson(Person const * const person, std::ofstream& stream)
{
	stream << indent << person->GetFirstName() << " " << person->GetLastName() << std::endl;
}