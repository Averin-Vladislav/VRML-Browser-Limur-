#include "sphere.h"

#define M_PI 3.14159265358979323846
#define M_PI_2 1.57079632679489661923
#define RINGS 20
#define SECTORS 32



Sphere::Sphere(float radius, float posX, float posY, float posZ, GLubyte colorR, GLubyte colorG, GLubyte colorB)
{
	rad = radius;

	positionX = posX;
	positionY = posY;
	positionZ = posZ;

	r = colorR;
	g = colorG;
	b = colorB;
}

Sphere::~Sphere()
{

}

void Sphere::draw()
{
	float const R = 1. / (float)(RINGS - 1);
	float const S = 1. / (float)(SECTORS - 1);
	int r, s;

	vertices.resize(RINGS * SECTORS * 3);
	normals.resize(RINGS * SECTORS * 3);
	texcoords.resize(RINGS * SECTORS * 2);

	std::vector<float>::iterator v = vertices.begin();
	std::vector<float>::iterator n = normals.begin();
	std::vector<float>::iterator t = texcoords.begin();

	for (r = 0; r < RINGS; r++)
		for (s = 0; s < SECTORS; s++)
		{
			float const y = sin(-M_PI_2 + M_PI * r * R);
			float const x = cos(2 * M_PI * s * S) * sin(M_PI * r * R);
			float const z = sin(2 * M_PI * s * S) * sin(M_PI * r * R);

			*t++ = s*S;
			*t++ = r*R;

			*v++ = x * rad;
			*v++ = y * rad;
			*v++ = z * rad;

			*n++ = x;
			*n++ = y;
			*n++ = z;
		}

	indices.resize(RINGS * SECTORS * 4);
	std::vector<short>::iterator i = indices.begin();
	for (r = 0; r < RINGS - 1; r++)
		for (s = 0; s < SECTORS - 1; s++)
		{
			*i++ = r * SECTORS + s;
			*i++ = r * SECTORS + (s + 1);
			*i++ = (r + 1) * SECTORS + (s + 1);
			*i++ = (r + 1) * SECTORS + s;
		}

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(positionX, positionY, positionZ);

	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);

	glColor3ub(r, g, b);

	glVertexPointer(3, GL_FLOAT, 0, &vertices[0]);
	glNormalPointer(GL_FLOAT, 0, &normals[0]);
	glTexCoordPointer(2, GL_FLOAT, 0, &texcoords[0]);
	glDrawElements(GL_QUADS, indices.size(), GL_UNSIGNED_SHORT, &indices[0]);

	glDisableClientState(GL_COLOR_ARRAY);
	glDisableClientState(GL_VERTEX_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);

	glPopMatrix();
}