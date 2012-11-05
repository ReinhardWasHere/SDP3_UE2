///////////////////////////////////////////////////////////////////////////
// Workfile : PersonReader.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Header of PersonReader.cpp
///////////////////////////////////////////////////////////////////////////

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