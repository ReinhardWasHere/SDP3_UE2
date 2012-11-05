///////////////////////////////////////////////////////////////////////////
// Workfile : Writer.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Header of Writer.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef WRITER_H
#define WRITER_H

#include <string>
#include <list>
#include <fstream>
#include "Object.h"
#include "Adress.h"

typedef std::list<Adress*>  TAdresses;
typedef TAdresses::const_iterator TAdressesItor;

std::string const header("Adressen mit zugeordneten Personen");

class Writer :
	public Object
{
public:
	virtual void Write(std::string const& filename, TAdresses const& adresses) = 0;
protected:
	bool OpenFile(std::string const& filename, std::ofstream& stream);
};

#endif