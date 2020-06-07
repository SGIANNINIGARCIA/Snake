/*
 * Vector2d.h
 *
 *  Created on: Feb 23, 2020
 *      Author: sandrogiannini
 */

#ifndef SRC_VECTOR2D_H_
#define SRC_VECTOR2D_H_

#include <cmath>
#include <iostream>

class Vector2d {
private:
	double m_x;
	double m_y;

public:
	Vector2d();
	Vector2d(double x, double y);
	virtual ~Vector2d();
	void operator+(const Vector2d &vec);
	Vector2d operator-(const Vector2d &vec);
	Vector2d operator*(double);
	void makeUnitVector();
	double getX() const;
	void setX(double x);
	double getY() const;
	void setY(double y);
	void print();
};

#endif /* SRC_VECTOR2D_H_ */
