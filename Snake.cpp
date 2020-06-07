/*
 * Snake.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

#include "Snake.h"

Snake::Snake(float x, float y) {
	this->position = Vector2d(x, y);
	this->movement = Vector2d(0.00, 0.00);
	this->speed = 0.002;

}

Snake::Snake() {
	this->position = Vector2d(0, 0);
	this->movement = Vector2d(0.2, 0.2);

}

Snake::~Snake() {
	// TODO Auto-generated destructor stub
}

void
Snake::draw(){

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

void
Snake::move(){
	this->position  + this->movement;
}

void
Snake::changeDirection(char direction){

	std::cout << "movement exec" << std::endl;

	switch(direction){
		case 'L':
			movement.setX(-speed);
			break;

		case 'R':
			movement.setX(speed);
			break;

		case 'U':
			movement.setY(speed);
			break;

		case 'D':
			movement.setY(-speed);
			break;
	}

}

