//============================================================================
// Name        : Body.h
// Author      : Sandro Giannini
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Snake in C++, Ansi-style
//============================================================================

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
