#ifndef WRITER_H
#define WRITER_H

class Writer :
	public Object
{
public:
	virtual ~Writer();
	virtual void Write(std::string const& filename, TAdresses const& adresses) = 0;
}

#endif