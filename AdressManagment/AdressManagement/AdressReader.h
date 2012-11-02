#ifndef ADRESSREADER_H
#define ADRESSREADER_H

class AdressReader :
	public Reader
{
public:
	~AdressReader();
	void Read(std::string const& filename, IAdressManagerReader* adressManager);
}

#endif