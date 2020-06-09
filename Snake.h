//============================================================================
// Name        : Snake.h
// Author      : Sandro Giannini
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Snake in C++, Ansi-style
//============================================================================

#include <glut/glut.h>
#include "Vector2d.h"
#include "Body.h"
#include "Byte.h"
#include "main.h"

#ifndef SRC_SNAKE_H_
#define SRC_SNAKE_H_

class Snake {

	// Position of the snake's head
	Vector2d          position;
	Vector2d          movement;
	std::vector<Body> body;
	Byte 			  byte;
	float             speed;
	char              currentDir;

public:
	Snake(float, float);
	Snake();
	virtual ~Snake();
	void draw();
	void move();
	void grow();
	void changeDirection(char);
	bool eat();
	void collides();
	void test();
	bool collideBoundaries();
	bool collideItself();
};

#endif /* SRC_SNAKE_H_ */
