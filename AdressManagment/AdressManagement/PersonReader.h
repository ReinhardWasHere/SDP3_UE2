#ifndef PERSONREADER_H
#define PERSONREADER_H

class PersonReader :
	public Reader
{
public:
	~PersonReader();
	void Read(std::string const& filename, IAdressManagerReader* adressManager);
}

#endif