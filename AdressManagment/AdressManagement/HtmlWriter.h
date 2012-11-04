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