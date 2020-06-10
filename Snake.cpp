//============================================================================
// Name        : Snake.cpp
// Author      : Sandro Giannini
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Snake in C++, Ansi-style
//============================================================================

#include "Snake.h"

Snake::Snake(float x, float y) {
	this->position = Vector2d(x, y);
	this->movement = Vector2d(0.00, 0.00);
	this->speed = 0.007;
	this->currentDir = ' ';
	this->body.push_back(Body(position));
	this->byte = Byte(0.5, 0.5);



}

Snake::Snake() {
	this->position = Vector2d(0, 0);
	this->movement = Vector2d(0.0, 0.0);
	this->speed = 0.02;
	this->currentDir = ' ';
	this->body.push_back(Body(position));
	this->byte = Byte(0.5, 0.5);

}

Snake::~Snake() {

}

void
Snake::draw(){

	for (std::vector<Body>::iterator it = body.begin() ; it != body.end(); ++it){
		it->draw();
	}

	byte.draw();

}

void
Snake::move(){

	this->position  + this->movement;


	Vector2d newPos = position;
	Vector2d temp;


	for (std::vector<Body>::iterator it = body.begin() ; it != body.end(); ++it){

			temp = it->getPosition();
			it->setPosition(newPos);
			newPos = temp;

		}

	// Check if the snake ate
	if (eat() == true){

		// If it did, grow
		grow();
		byte.placeByte(body);
	}
}


void
Snake::changeDirection(char direction){



	switch(direction){
		case 'L':
			// If current direction is opposite, then disregard
			if(currentDir == 'R' && body.size() > 1){
				return;
			}

			movement.setX(-speed);
			movement.setY(0.0);
			break;

		case 'R':

			if(currentDir == 'L' && body.size() > 1){
				return;
			}

			movement.setX(speed);
			movement.setY(0.0);
			break;

		case 'U':

			if(currentDir == 'D' && body.size() > 1){
				return;
			}

			movement.setY(speed);
			movement.setX(0.0);
			break;

		case 'D':

			if(currentDir == 'U' && body.size() > 1){
				return;
			}
			movement.setY(-speed);
			movement.setX(0.0);
			break;
	}

	// Set new direction
	currentDir = direction;

}

void
Snake::grow(){
	this->body.push_back(Body());
}

bool
Snake::eat(){

	Vector2d bytePos = byte.getPosition();

	if(position.getX() < (bytePos.getX() + 0.02)
			&& position.getX() > (bytePos.getX() - 0.02)
			&& position.getY() < (bytePos.getY()  + 0.02)
			&& position.getY() > (bytePos.getY() - 0.02)){
		return true;
	}

	return false;
}

void
Snake::collides(){

	if (collideItself() || collideBoundaries()){
		lostScreen();
		this->movement = Vector2d(0.00, 0.00);
		this->position = Vector2d(-5, -5);
	}

}

bool
Snake::collideItself(){

	for (std::vector<Body>::iterator it = body.begin() + 1 ; it != body.end(); ++it){

			if(position.getX() < (it->getPosition().getX() + 0.002)
					&& position.getX() > (it->getPosition().getX() - 0.002)
					&& position.getY() < (it->getPosition().getY() + 0.002)
					&& position.getY() > (it->getPosition().getY() - 0.002)){
				return true;
			}
	}

	return false;

}

bool
Snake::collideBoundaries(){

	if(position.getX() > 1 || position.getX() < -1){
		return true;

	} else if (position.getY() > 1 || position.getY() < -1){
		return true;

	} else {
		return false;
	}

}

void
Snake::test(){
	int i;

	for(i = 0; i < 3000; i++){
		this->body.push_back(Body());
	}
}

