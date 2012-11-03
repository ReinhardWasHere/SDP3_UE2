#ifndef ADRESSREADER_H
#define ADRESSREADER_H

#include "Reader.h"

class AdressReader :
	public Reader
{
public:
	~AdressReader();
	void Read(std::string const& filename, AdressManager* adressManager);
};

#endif