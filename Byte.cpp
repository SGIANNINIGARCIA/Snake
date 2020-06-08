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


	//float x = 2 * ((double)rand() / (double)RAND_MAX) -1;
	//float y = 2 * ((double)rand() / (double)RAND_MAX) -1;

	do {
		float x = 2 * ((double)rand() / (double)RAND_MAX) -1;
	    float y = 2 * ((double)rand() / (double)RAND_MAX) -1;
	} while(true);

	//this->position = Vector2d(x, y);
}

Vector2d
Byte::getPosition(){
	return this->position;

}

