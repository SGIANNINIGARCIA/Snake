/*
 * Byte.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

#include "Byte.h"

Byte::Byte(float x, float y, Snake snake) {
	this->position = Vector2d(x, y);
	this->snake = snake;

}

Byte::Byte() {
	this->position = Vector2d(0, 0);

}

Byte::~Byte() {
	// TODO Auto-generated destructor stub
}

void
Byte::draw(){

	glClear( GL_COLOR_BUFFER_BIT);
	 glColor3f(0.0, 1.0, 0.0);
	 glBegin(GL_POLYGON);
	  glVertex3f(position.getX() - 0.01, position.getY() + 0.01, 0.0);
	  glVertex3f(position.getX() + 0.01, position.getY() + 0.01, 0.0);
	  glVertex3f(position.getX() + 0.01, position.getY() - 0.01, 0.0);
	  glVertex3f(position.getX() - 0.01, position.getY() - 0.01, 0.0);
	 glEnd();
	 glFlush();

}

