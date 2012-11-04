#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <list>
#include "Object.h"

//#include "AdressManager.h"
//#include "Adress.h"

//#include "IAdressManagerReader.h"

class Person :
	public Object
{
public:
	Person();
	~Person();

	size_t GetIndex() const;
	std::string GetFirstName() const;
	std::string GetLastName() const;
private:
	size_t mIndex;
	std::string mFirstName;
	std::string mLastName;
};



#endif