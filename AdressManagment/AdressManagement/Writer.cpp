///////////////////////////////////////////////////////////////////////////
// Workfile : Writer.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 5.11.2012
// Description : Definition of methods of class Writer
///////////////////////////////////////////////////////////////////////////

#include "Writer.h"

bool Writer::OpenFile(std::string const& filename, std::ofstream& stream)
{
	stream.open(filename);
	return stream.is_open();
}