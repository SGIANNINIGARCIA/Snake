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
	this->body.push_back(Body(position));

}

Snake::Snake() {
	this->position = Vector2d(0, 0);
	this->movement = Vector2d(0.2, 0.2);
	this->speed = 0.002;
	this->currentDir = ' ';
	this->body.push_back(Body(position));

}

Snake::~Snake() {
	// TODO Auto-generated destructor stub
}

void
Snake::draw(){

	for (std::vector<Body>::iterator it = body.begin() ; it != body.end(); ++it){
		it->draw();
	}

}

void
Snake::move(){
	this->position  + this->movement;

	Vector2d oldPos;


	for (std::vector<Body>::iterator it = body.begin() ; it != body.end(); ++it){

			it->setPosition(position);
		}
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

