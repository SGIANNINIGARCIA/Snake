//============================================================================
// Name        : Body.cpp
// Author      : Sandro Giannini
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Snake in C++, Ansi-style
//============================================================================

#include "Body.h"

Body::Body(Vector2d position) {
	this->position = position;

}

Body::Body() {
	this->position = Vector2d(2, 2);

}

Body::~Body() {
	// TODO Auto-generated destructor stub
}

void
Body::draw(){

	 glColor3f(0.0, 1.0, 0.0);
	 glBegin(GL_POLYGON);
	  glVertex3f(position.getX() - 0.02, position.getY() + 0.02, 0.0);
	  glVertex3f(position.getX() + 0.02, position.getY() + 0.02, 0.0);
	  glVertex3f(position.getX() + 0.02, position.getY() - 0.02, 0.0);
	  glVertex3f(position.getX() - 0.02, position.getY() - 0.02, 0.0);
	 glEnd();

}

void
Body::setPosition(Vector2d newPos){
	this->position = newPos;
}

Vector2d
Body::getPosition(){
	return this->position;
}

