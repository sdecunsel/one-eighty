// vertex.hpp

#ifndef _VERTEX_HPP
#define _VERTEX_HPP

#include <cstdint>

typedef uint64_t uint64;

class Vertex
{
public:
	Vertex();
	Vertex(uint64 id);
	Vertex(uint64 id, double x, double y, double z);
public:
	uint64 id;
	double x;
	double y;
	double z;
};

#endif _VERTEX_HPP