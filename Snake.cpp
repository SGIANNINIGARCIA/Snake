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
	this->currentDir = ' ';

}

Snake::Snake() {
	this->position = Vector2d(0, 0);
	this->movement = Vector2d(0.2, 0.2);
	this->speed = 0.002;
	this->currentDir = ' ';

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



	switch(direction){
		case 'L':
			// If current direction is opposite, then disregard
			if(currentDir == 'R'){
				return;
			}

			movement.setX(-speed);
			movement.setY(0.0);
			break;

		case 'R':

			if(currentDir == 'L'){
				return;
			}

			movement.setX(speed);
			movement.setY(0.0);
			break;

		case 'U':

			if(currentDir == 'D'){
				return;
			}

			movement.setY(speed);
			movement.setX(0.0);
			break;

		case 'D':

			if(currentDir == 'U'){
				return;
			}
			movement.setY(-speed);
			movement.setX(0.0);
			break;
	}

	// Set new direction
	currentDir = direction;

}

