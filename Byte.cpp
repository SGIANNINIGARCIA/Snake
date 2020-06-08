/*
 * Byte.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

#include "Byte.h"

Byte::Byte(float x, float y, Snake snake) {
	this->position = Vector2d();
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

	// Create a random number generator
	std::random_device rd;
	std::mt19937 gen(rd());

	// We want random numbers within [minimum, maximum]
	std::uniform_int_distribution<> dis(-1, 1);

	this->position.setX(dis(gen));
	this->position.setY(dis(gen));

	this->position.print();



}

