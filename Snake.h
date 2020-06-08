/*
 * Snake.h
 *
 *  Created on: Jun 5, 2020
 *      Author: sandrogiannini
 */

#include <glut/glut.h>
#include "Vector2d.h"
#include "Body.h"

#ifndef SRC_SNAKE_H_
#define SRC_SNAKE_H_

class Snake {

	// Position of the snake's head
	Vector2d          position;
	Vector2d          movement;
	std::vector<Body> body;
	float             speed;
	char              currentDir;

public:
	Snake(float, float);
	Snake();
	virtual ~Snake();
	void draw();
	void move();
	void changeDirection(char);
};

#endif /* SRC_SNAKE_H_ */
