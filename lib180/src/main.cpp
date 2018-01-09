#include "vertex.hpp"
#include "face.hpp"

int main(int argc, char* argv[])
{
	Vertex *v1 = new Vertex(0, 1.2, 3.4, 5.6);
	Vertex *v2 = new Vertex(1, 7.7, 8.8, 9.9);
	Vertex *v3 = new Vertex(2, 0.0, 0.0, 0.0);
	Vertex *v4 = new Vertex(3, 2.8, 3.7, 4.6);
	Face *tri = new Face(v1, v2, v3);
	Face *quad = new Face(v1, v2, v3, v4);
	
	if (!(tri->IsTri()) || !(quad->IsQuad()))
		return 1;

	delete v1, v2, v3, v4;
	delete tri, quad;
	return 0;
}