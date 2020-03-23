#include "Vector2d.h"
#include <iostream>
#include <math.h>
#include <cmath>
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

void Vector2d::sum(Vector2d Vector)
{
	x = x + Vector.x;
	y = y + Vector.y;
}

void Vector2d::sub(Vector2d Vector)
{
	x = x - Vector.x;
	y = y - Vector.y;
}

void Vector2d::mult(double Value)
{
	x = x * Value;
	y = y * Value;
}

double Vector2d::scalarMult(Vector2d Vector)
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

void main() 
{
	setlocale(LC_ALL, "Russian");
	Vector2d v1= Vector2d(5, 6);
	Vector2d v2= Vector2d(1, 2, 3, 4);
	v1.print();
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

	cout << v1.tangensAngle(v2) << endl;

}