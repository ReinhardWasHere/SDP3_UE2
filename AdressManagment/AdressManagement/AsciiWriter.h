#ifndef ASCIIWRITER_H
#define ASCIIWRITER_H

#include "Writer.h"

class AsciiWriter :
	public Writer
{
public:
	~AsciiWriter();
	void Write(std::string const& filename, TAdresses const& adresses);
};

#endif