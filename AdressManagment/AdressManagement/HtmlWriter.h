///////////////////////////////////////////////////////////////////////////
// Workfile : HtmlWriter.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Header of HtmlWriter.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef HTMLWRITER_H
#define HTMLWRITER_H

#include "Writer.h"

class HtmlWriter :
	public Writer
{
public:
	~HtmlWriter();
	void Write(std::string const& filename, TAdresses const& adresses);
private:
	void WriteAdress(Adress const * const adr, std::ofstream& stream);
	void WritePerson(Person const * const person, std::ofstream& stream);
};

#endif