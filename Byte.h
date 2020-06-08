/*
 * Byte.h
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

#include <glut/glut.h>
#include "Vector2d.h"
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
	void placeByte();
	bool
	bool collide(Vector2d);
	Vector2d getPosition();
};

#endif /* SRC_BYTE_H_ */
