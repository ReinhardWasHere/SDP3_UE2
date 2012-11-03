#ifndef WRITER_H
#define WRITER_H

#include <string>
#include <list>
#include "Object.h"
#include "Adress.h"

//#include "IAdressManagerReader.h"

typedef std::list<Adress*>  TAdresses;	//same typedef as in "adressmanager"
typedef TAdresses::iterator TAdressesItor;

class Writer :
	public Object
{
public:
	virtual void Write(std::string const& filename, TAdresses const& adresses) = 0;
};

#endif