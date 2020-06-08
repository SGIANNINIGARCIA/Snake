/*
 * Byte.h
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

#include <glut/glut.h>
#include "Vector2d.h"
#include "Snake.h"

#ifndef SRC_BYTE_H_
#define SRC_BYTE_H_

class Byte {

	Vector2d position;
	Snake snake;

public:
	Byte(float, float, Snake);
	Byte();
	virtual ~Byte();
	void draw();
};

#endif /* SRC_BYTE_H_ */
