#ifndef READER_H
#define READER_H

#include <string>
#include "Object.h"

class AdressManager;	//forward declaration

class Reader :
	public Object
{
public:
	virtual void Read(std::string const& filename, AdressManager* adressManager) = 0;
};

#endif