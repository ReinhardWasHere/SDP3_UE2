#ifndef PERSONREADER_H
#define PERSONREADER_H

#include "Reader.h"

class PersonReader :
	public Reader
{
public:
	~PersonReader();
	void Read(std::string const& filename, AdressManager* adressManager);
};

#endif