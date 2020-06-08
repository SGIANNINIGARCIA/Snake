/*
 * Byte.h
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

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
