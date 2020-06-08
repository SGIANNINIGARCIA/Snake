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
	Body(float, float);
	Body();
	virtual ~Body();
	void draw();
};

#endif /* SRC_BODY_H_ */
