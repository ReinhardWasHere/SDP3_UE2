#ifndef HTMLWRITER_H
#define HTMLWRITER_H

#include "Writer.h"

class HtmlWriter :
	public Writer
{
public:
	~HtmlWriter();
	void Write(std::string const& filename, TAdresses const& adresses);
};

#endif