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

	 glColor3f(0.0, 1.0, 0.0);
	 glBegin(GL_POLYGON);
	  glVertex3f(position.getX() - 0.01, position.getY() + 0.01, 0.0);
	  glVertex3f(position.getX() + 0.01, position.getY() + 0.01, 0.0);
	  glVertex3f(position.getX() + 0.01, position.getY() - 0.01, 0.0);
	  glVertex3f(position.getX() - 0.01, position.getY() - 0.01, 0.0);
	 glEnd();

}

void
Byte::placeByte(){

	//2 * ((double)rand() / (double)RAND_MAX) -1,2 * ((double)rand();

	this->position.print();



}

