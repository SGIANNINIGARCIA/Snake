/*
 * Vector2d.cpp
 *
 *  Created on: Feb 23, 2020
 *      Author: sandrogiannini
 */

#include "Vector2d.h"

Vector2d::Vector2d() {

	m_x = 0;
	m_y = 0;
}

Vector2d::Vector2d(double x, double y) {

	m_x = x;
	m_y = y;

}

Vector2d::~Vector2d() { }



double Vector2d::getX() const {
	return m_x;
}

void Vector2d::setX(double x) {
	m_x = x;
}

double Vector2d::getY() const {
	return m_y;
}

void Vector2d::setY(double y) {
	m_y = y;
}

void
Vector2d::operator+(const Vector2d &vec)  {

	Vector2d sum;
	m_x = m_x + vec.m_x;
	m_y = m_y + vec.m_y;

}

Vector2d
Vector2d::operator*(double x)  {

	Vector2d mul;
	mul.m_x = m_x * x;
	mul.m_y = m_y * x;

	return mul;
}

Vector2d
Vector2d::operator-(const Vector2d &vec)  {

	Vector2d def;
	def.m_x = m_x + (-vec.m_x);
	def.m_y = m_y + (-vec.m_y);

	return def;
}

void
Vector2d::makeUnitVector(){

	double magnitud = sqrt((m_x*m_x) + (m_y*m_y));

	m_x = (m_x/magnitud);
	m_y = (m_y/magnitud);

}

void
Vector2d::print(){
	std::cout<< "X = " << m_x << " Y = " << m_y <<std::endl;

}

