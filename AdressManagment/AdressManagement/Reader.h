///////////////////////////////////////////////////////////////////////////
// Workfile : Reader.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Declaration of abstract Class Reader
///////////////////////////////////////////////////////////////////////////

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