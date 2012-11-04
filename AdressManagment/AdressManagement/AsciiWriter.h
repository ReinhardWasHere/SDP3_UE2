#ifndef ASCIIWRITER_H
#define ASCIIWRITER_H

#include "Writer.h"

std::string const indent("   ");
std::string const line("----------------------------------");

class AsciiWriter :
	public Writer
{
public:
	~AsciiWriter();
	void Write(std::string const& filename, TAdresses const& adresses);
private:
	void WriteAdress(Adress const * const adr, std::ofstream& stream);
	void WritePerson(Person const * const person, std::ofstream& stream);
};

#endif