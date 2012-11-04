#include "Writer.h"

bool Writer::OpenFile(std::string const& filename, std::ofstream& stream)
{
	stream.open(filename);
	return stream.is_open();
}