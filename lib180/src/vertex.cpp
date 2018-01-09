// vertex.cpp

#include "vertex.hpp"

Vertex::Vertex()
{
	this->id = 0;
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vertex::Vertex(uint64 id)
{
	this->id = id;
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vertex::Vertex(uint64 id, double x, double y, double z)
{
	this->id = id;
	this->x = x;
	this->y = y;
	this->z = z;
}
