/*
 * Byte.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

#include "Byte.h"

Byte::Byte(float x, float y) {
	this->position = Vector2d(x, y);

}

Byte::Byte() {
	this->position = Vector2d(0, 0);

}

Byte::~Byte() {
	// TODO Auto-generated destructor stub
}

void
Byte::draw(){

	 glLoadIdentity();
	 glColor3f(0.0, 1.0, 0.0);
	 glBegin(GL_POLYGON);
	  glVertex3f(this->position.getX() - 0.01, this->position.getY() + 0.01, 0.0);
	  glVertex3f(this->position.getX() + 0.01, this->position.getY() + 0.01, 0.0);
	  glVertex3f(this->position.getX() + 0.01, this->position.getY() - 0.01, 0.0);
	  glVertex3f(this->position.getX() - 0.01, this->position.getY() - 0.01, 0.0);
	 glEnd();

}

void
Byte::placeByte(std::vector<Body>& body){


	float x = 0;
    float y = 0;

	x = 2 * ((double)rand() / (double)RAND_MAX) -1;
    y = 2 * ((double)rand() / (double)RAND_MAX) -1;

	position.setX(x);
	position.setY(y);

	position.print();

}

Vector2d
Byte::getPosition(){
	return this->position;

}
