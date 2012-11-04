//#include <vld.h>

#include "AdressManager.h"
#include "PersonReader.h"
#include "AdressReader.h"
#include "AsciiWriter.h"
#include "HtmlWriter.h"

int main() 
{
	AdressManager* adressManager1 = new AdressManager;
	Reader* personReader1 = new PersonReader;
	Reader* adressReader1 = new AdressReader;
	AsciiWriter* asciiWriter1 = new AsciiWriter;
	HtmlWriter* htmlWriter1 = new HtmlWriter;

	personReader1->Read("persons1.txt", adressManager1);
	personReader1->Read("persons2.txt", adressManager1);
	adressReader1->Read("adresses.txt", adressManager1);

	adressManager1->LinkAdresses();
	
	delete adressManager1; adressManager1 = 0;
	delete personReader1; personReader1 = 0;
	delete adressReader1; adressReader1 = 0;
	delete asciiWriter1; asciiWriter1 = 0;
	delete htmlWriter1; htmlWriter1 = 0;

	return 0;
}