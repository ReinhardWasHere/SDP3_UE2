#ifndef READER_H
#define READER_H

#include "IAdressManagerReader.h"

class Reader :
	public Object
{
public:
	virtual ~Reader();
	virtual void Read(std::string const& filename, IAdressManagerReader* adressManager) = 0;
}

#endif