/*
 * Body.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

#include "Body.h"

Body::Body(float x, float y) {
	this->position = Vector2d(x, y);

}

Body::Body() {
	this->position = Vector2d(0, 0);

}

Body::~Body() {
	// TODO Auto-generated destructor stub
}

void
Body::draw(){

	 glColor3f(0.0, 1.0, 0.0);
	 glBegin(GL_POLYGON);
	  glVertex3f(position.getX() - 0.01, position.getY() + 0.01, 0.0);
	  glVertex3f(position.getX() + 0.01, position.getY() + 0.01, 0.0);
	  glVertex3f(position.getX() + 0.01, position.getY() - 0.01, 0.0);
	  glVertex3f(position.getX() - 0.01, position.getY() - 0.01, 0.0);
	 glEnd();

}

