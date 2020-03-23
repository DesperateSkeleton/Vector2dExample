#include "Vector2d.h"
#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
using namespace std;


Vector2d::Vector2d(double x, double y) 
{
	this->x = x;
	(*this).y = y;
}


Vector2d::Vector2d(double x1, double y1, double x2, double y2)
{
	this->x = x2 - x1;
	(*this).y = y2 - y1;
}

Vector2d::Vector2d(const Vector2d& Vector) :
	x(Vector.x), y(Vector.y) 
{

}

Vector2d::~Vector2d()
{
	cout << "Destructor enabled" << endl;
}

void Vector2d::print()
{
	cout << "x = " << x << " y = " << y << endl;
}

Vector2d Vector2d::sum(Vector2d Vector)
{
	x = x + Vector.x;
	y = y + Vector.y;
	return Vector2d(x, y);
}

Vector2d Vector2d::operator+(const Vector2d& vector) const
{
	return Vector2d(x + vector.x, y + vector.y);
}

Vector2d Vector2d::sub(Vector2d Vector)
{
	x = x - Vector.x;
	y = y - Vector.y;
	return Vector2d(x, y);
}

Vector2d Vector2d::operator-(const Vector2d& vector) const
{
	return Vector2d(x - vector.x, y - vector.y);
}

Vector2d Vector2d::mult(double Value)
{
	x = x * Value;
	y = y * Value;
	return Vector2d(x, y);
}

Vector2d Vector2d::operator*(double Value) const
{
	return Vector2d(x * Value, y * Value);
}

double Vector2d::scalarMult(Vector2d Vector)
{
	return (x * Vector.x + y * Vector.y);
}

double Vector2d::operator*(Vector2d Vector) const
{
	return (x * Vector.x + y * Vector.y);
}

double Vector2d::vectorLength()
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

double Vector2d::tangensAngle(Vector2d Vector)
{
	return (x * Vector.y - y * Vector.x) / (scalarMult(Vector));
}

Vector2d& Vector2d::operator++()
{
	x++;
	y++;
	return *this;
}

Vector2d Vector2d::operator++(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}


Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}

Vector2d Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}

const Vector2d& Vector2d::operator+= (const Vector2d& vector)
{
	x += vector.x;
	y += vector.y;
	return *this;
}

const Vector2d& Vector2d::operator-= (const Vector2d& vector)
{
	x -= vector.x;
	y -= vector.y;
	return *this;
}

const Vector2d& Vector2d::operator*= (const Vector2d& vector)
{
	x *= vector.x;
	y *= vector.y;
	return *this;
}

Vector2d::operator string() const 
{
	string s = "(" + to_string(x) + ";" + to_string(y) + ")";
	return s;
}

void main() 
{
	setlocale(LC_ALL, "Russian");
	Vector2d v1= Vector2d(5, 6);
	Vector2d v2= Vector2d(1, 2, 3, 4);
	/*v1.print();
	v2.print();
	v1.sum(v2);
	v1.print();
	v2.print();
	v1.sub(v2);
	v1.print();
	v2.print();
	v1.mult(5);
	v1.print();
	v2.print();
	cout << v1.scalarMult(v2) << endl;

	cout << v1.vectorLength() << endl;

	cout << v1.tangensAngle(v2) << endl;*/

	Vector2d c = v1 + v2;
	c.print();

	Vector2d d = v1 - v2;
	d.print();

	Vector2d e = v1 * 5;
	e.print();

	
}