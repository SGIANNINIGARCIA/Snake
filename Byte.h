//============================================================================
// Name        : Byte.h
// Author      : Sandro Giannini
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Snake in C++, Ansi-style
//============================================================================

#include <glut/glut.h>
#include "Vector2d.h"
#include "Body.h"
#include <random>

#ifndef SRC_BYTE_H_
#define SRC_BYTE_H_

class Byte {

	Vector2d position;

public:
	Byte(float, float);
	Byte();
	virtual ~Byte();
	void draw();
	void placeByte(std::vector<Body>& body);
	Vector2d getPosition();
	bool collides(std::vector<Body>& body, float, float);
};

#endif /* SRC_BYTE_H_ */
