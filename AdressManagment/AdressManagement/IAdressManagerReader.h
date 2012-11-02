#ifndef IADRESSMANAGERREADER_H
#define IADRESSMANAGERREADER_H

class IAdressManagerReader 
{
public:
	virtual void AddAdress(Adress* adress) = 0;
	virtual void AddPerson(Person* person) = 0;
}

#endif