// face.hpp

#ifndef _FACE_HPP
#define _FACE_HPP

#include "vertex.hpp"

class Face
{
public:
	Face();
	Face(Vertex *v1, Vertex *v2, Vertex *v3);
	Face(Vertex *v1, Vertex *v2, Vertex *v3, Vertex *v4);
	bool IsBad();
	bool IsTri();
	bool IsQuad();
public:
	Vertex* v[4];
};

#endif // _FACE_HPP