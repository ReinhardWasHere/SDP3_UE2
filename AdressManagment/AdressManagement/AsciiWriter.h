///////////////////////////////////////////////////////////////////////////
// Workfile : AsciiWriter.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Header of AsciiWriter.cpp
///////////////////////////////////////////////////////////////////////////

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