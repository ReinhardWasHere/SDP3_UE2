#include <vld.h>
#include <iostream>
#include "AdressManager.h"
#include "PersonReader.h"
#include "AdressReader.h"
#include "AsciiWriter.h"
#include "HtmlWriter.h"


//empty adress & person files
void testcase0()
{
	AdressManager* adressManager = new AdressManager;
	Reader* personReader = new PersonReader;
	Reader* adressReader = new AdressReader;
	AsciiWriter* asciiWriter = new AsciiWriter;
	HtmlWriter* htmlWriter = new HtmlWriter;

	std::string const person1("testcase0_person.txt");
	std::string const adress("testcase0_adress.txt");
	std::string const ascii("testcase0_ascii.txt");
	std::string const html("testcase0_html.html");


	std::cout << "Testcase0: Empty adress file and person files" << std::endl;

	std::cout << "Read: " << person1 << " ... ";
	adressManager->ReadFile(person1, personReader);
	std::cout << "Finished" << std::endl;

	std::cout << "Read: " << adress << " ... ";
	adressManager->ReadFile(adress, adressReader);
	std::cout << "Finished" << std::endl;

	std::cout << "LinkAdresses: " << "... ";
	adressManager->LinkAdresses();
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << ascii << " ... ";
	adressManager->WriteAdresses(ascii, asciiWriter);
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << html << " ... ";
	adressManager->WriteAdresses(html, htmlWriter);
	std::cout << "Finished" << std::endl;

	std::cout << std::endl << std::endl;

	delete adressManager; adressManager = 0;
	delete personReader; personReader = 0;
	delete adressReader; adressReader = 0;
	delete asciiWriter; asciiWriter = 0;
	delete htmlWriter; htmlWriter = 0;
}

//empty person file & valid adress file(single adress)
void testcase1()
{
	AdressManager* adressManager = new AdressManager;
	Reader* personReader = new PersonReader;
	Reader* adressReader = new AdressReader;
	AsciiWriter* asciiWriter = new AsciiWriter;
	HtmlWriter* htmlWriter = new HtmlWriter;

	std::string const person1("testcase0_person.txt");
	std::string const adress("testcase1_adress.txt");
	std::string const ascii("testcase1_ascii.txt");
	std::string const html("testcase1_html.html");


	std::cout << "Testcase1: Valid adress file(single adress) "
		<< "and empty person files" << std::endl;

	std::cout << "Read: " << person1 << " ... ";
	adressManager->ReadFile(person1, personReader);
	std::cout << "Finished" << std::endl;

	std::cout << "Read: " << adress << " ... ";
	adressManager->ReadFile(adress, adressReader);
	std::cout << "Finished" << std::endl;

	std::cout << "LinkAdresses: " << "... ";
	adressManager->LinkAdresses();
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << ascii << " ... ";
	adressManager->WriteAdresses(ascii, asciiWriter);
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << html << " ... ";
	adressManager->WriteAdresses(html, htmlWriter);
	std::cout << "Finished" << std::endl;

	std::cout << std::endl << std::endl;

	delete adressManager; adressManager = 0;
	delete personReader; personReader = 0;
	delete adressReader; adressReader = 0;
	delete asciiWriter; asciiWriter = 0;
	delete htmlWriter; htmlWriter = 0;
}

//valid person file(single person) & valid adress file(single adress)
void testcase2()
{
	AdressManager* adressManager = new AdressManager;
	Reader* personReader = new PersonReader;
	Reader* adressReader = new AdressReader;
	AsciiWriter* asciiWriter = new AsciiWriter;
	HtmlWriter* htmlWriter = new HtmlWriter;

	std::string const person1("testcase2_person.txt");
	std::string const adress("testcase1_adress.txt");
	std::string const ascii("testcase2_ascii.txt");
	std::string const html("testcase2_html.html");


	std::cout << "Testcase2: Valid adress file(single adress) "
		<< "and valid person file(single person)" << std::endl;

	std::cout << "Read: " << person1 << " ... ";
	adressManager->ReadFile(person1, personReader);
	std::cout << "Finished" << std::endl;

	std::cout << "Read: " << adress << " ... ";
	adressManager->ReadFile(adress, adressReader);
	std::cout << "Finished" << std::endl;

	std::cout << "LinkAdresses: " << "... ";
	adressManager->LinkAdresses();
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << ascii << " ... ";
	adressManager->WriteAdresses(ascii, asciiWriter);
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << html << " ... ";
	adressManager->WriteAdresses(html, htmlWriter);
	std::cout << "Finished" << std::endl;

	std::cout << std::endl << std::endl;

	delete adressManager; adressManager = 0;
	delete personReader; personReader = 0;
	delete adressReader; adressReader = 0;
	delete asciiWriter; asciiWriter = 0;
	delete htmlWriter; htmlWriter = 0;
}

//valid person file & valid adress file, multiple adresses, persons
void testcase3()
{
	AdressManager* adressManager = new AdressManager;
	Reader* personReader = new PersonReader;
	Reader* adressReader = new AdressReader;
	AsciiWriter* asciiWriter = new AsciiWriter;
	HtmlWriter* htmlWriter = new HtmlWriter;

	std::string const person1("testcase3_person.txt");
	std::string const adress("testcase3_adress.txt");
	std::string const ascii("testcase3_ascii.txt");
	std::string const html("testcase3_html.html");


	std::cout << "Testcase3: Valid adress file and valid person file, " 
		<< "multiple adresses, persons" << std::endl;

	std::cout << "Read: " << person1 << " ... ";
	adressManager->ReadFile(person1, personReader);
	std::cout << "Finished" << std::endl;

	std::cout << "Read: " << adress << " ... ";
	adressManager->ReadFile(adress, adressReader);
	std::cout << "Finished" << std::endl;

	std::cout << "LinkAdresses: " << "... ";
	adressManager->LinkAdresses();
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << ascii << " ... ";
	adressManager->WriteAdresses(ascii, asciiWriter);
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << html << " ... ";
	adressManager->WriteAdresses(html, htmlWriter);
	std::cout << "Finished" << std::endl;

	std::cout << std::endl << std::endl;

	delete adressManager; adressManager = 0;
	delete personReader; personReader = 0;
	delete adressReader; adressReader = 0;
	delete asciiWriter; asciiWriter = 0;
	delete htmlWriter; htmlWriter = 0;
}

//valid person files & valid adress file, multiple adresses, persons
void testcase4()
{
	AdressManager* adressManager = new AdressManager;
	Reader* personReader = new PersonReader;
	Reader* adressReader = new AdressReader;
	AsciiWriter* asciiWriter = new AsciiWriter;
	HtmlWriter* htmlWriter = new HtmlWriter;

	std::string const person1("testcase3_person.txt");
	std::string const person2("testcase4_person.txt");
	std::string const adress("testcase3_adress.txt");
	std::string const ascii("testcase4_ascii.txt");
	std::string const html("testcase4_html.html");


	std::cout << "Testcase4: Valid adress file and valid person files, " 
		<< "multiple adresses, persons" << std::endl;

	std::cout << "Read: " << person1 << " ... ";
	adressManager->ReadFile(person1, personReader);
	std::cout << "Finished" << std::endl;

	std::cout << "Read: " << person2 << " ... ";
	adressManager->ReadFile(person2, personReader);
	std::cout << "Finished" << std::endl;

	std::cout << "Read: " << adress << " ... ";
	adressManager->ReadFile(adress, adressReader);
	std::cout << "Finished" << std::endl;

	std::cout << "LinkAdresses: " << "... ";
	adressManager->LinkAdresses();
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << ascii << " ... ";
	adressManager->WriteAdresses(ascii, asciiWriter);
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << html << " ... ";
	adressManager->WriteAdresses(html, htmlWriter);
	std::cout << "Finished" << std::endl;

	std::cout << std::endl << std::endl;

	delete adressManager; adressManager = 0;
	delete personReader; personReader = 0;
	delete adressReader; adressReader = 0;
	delete asciiWriter; asciiWriter = 0;
	delete htmlWriter; htmlWriter = 0;
}

//valid person file & corrupted adress file
void testcase5()
{
	AdressManager* adressManager = new AdressManager;
	Reader* personReader = new PersonReader;
	Reader* adressReader = new AdressReader;
	AsciiWriter* asciiWriter = new AsciiWriter;
	HtmlWriter* htmlWriter = new HtmlWriter;

	std::string const person1("testcase4_person.txt");
	std::string const adress("testcase5_adress.txt");
	std::string const ascii("testcase5_ascii.txt");
	std::string const html("testcase5_html.html");


	std::cout << "Testcase5: Corrupted adress file and valid person file" << std::endl;

	std::cout << "Read: " << person1 << " ... ";
	adressManager->ReadFile(person1, personReader);
	std::cout << "Finished" << std::endl;

	std::cout << "Read: " << adress << " ... ";
	adressManager->ReadFile(adress, adressReader);
	std::cout << "Finished" << std::endl;

	std::cout << "LinkAdresses: " << "... ";
	adressManager->LinkAdresses();
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << ascii << " ... ";
	adressManager->WriteAdresses(ascii, asciiWriter);
	std::cout << "Finished" << std::endl;

	std::cout << "Write: " << html << " ... ";
	adressManager->WriteAdresses(html, htmlWriter);
	std::cout << "Finished" << std::endl;

	std::cout << std::endl << std::endl;

	delete adressManager; adressManager = 0;
	delete personReader; personReader = 0;
	delete adressReader; adressReader = 0;
	delete asciiWriter; asciiWriter = 0;
	delete htmlWriter; htmlWriter = 0;
}


int main() 
{
	testcase0();
	testcase1();
	testcase2();
	testcase3();
	testcase4();
	testcase5();

	return 0;
}