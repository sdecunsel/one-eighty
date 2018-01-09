// face.cpp

#include "face.hpp"

Face::Face()
{
	this->v[0] = NULL;
	this->v[1] = NULL;
	this->v[2] = NULL;
	this->v[3] = NULL;
}

Face::Face(Vertex *v1, Vertex *v2, Vertex *v3)
{
	this->v[0] = v1;
	this->v[1] = v2;
	this->v[2] = v3;
	this->v[3] = NULL;
}

Face::Face(Vertex *v1, Vertex *v2, Vertex *v3, Vertex *v4)
{
	this->v[0] = v1;
	this->v[1] = v2;
	this->v[2] = v3;
	this->v[3] = v4;
}
bool Face::IsBad()
{
	if (this->v[0] == NULL)
		return true;
	if (this->v[1] == NULL)
		return true;
	if (this->v[2] == NULL)
		return true;

	return false;
}

bool Face::IsTri()
{
	if (this->IsBad)
		return false;
	if (this->v[4] != NULL)
		return false;

	return true;
}

bool Face::IsQuad()
{
	if (this->IsBad)
		return false;
	if (this->v[4] == NULL)
		return false;

	return true;
}
