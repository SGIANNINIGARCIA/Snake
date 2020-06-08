/*
 * Body.h
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

#include <glut/glut.h>
#include "Vector2d.h"
#include <random>

#ifndef SRC_BODY_H_
#define SRC_BODY_H_

class Body {

	Vector2d position;

public:
	Body(Vector2d);
	Body();
	virtual ~Body();
	void setPosition(Vector2d);
	Vector2d getPosition();
	void draw();
};

#endif /* SRC_BODY_H_ */
