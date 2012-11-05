///////////////////////////////////////////////////////////////////////////
// Workfile : AdressReader.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Header of AdressReader.cpp
///////////////////////////////////////////////////////////////////////////

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