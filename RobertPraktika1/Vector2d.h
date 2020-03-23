#pragma once
#include <string>
class Vector2d
{
private:
       double x, y;
   
public:
       Vector2d() { x = 0; y = 0; }
       ~Vector2d();

       Vector2d(double, double);
       Vector2d(double, double, double, double);
       Vector2d(const Vector2d&);
       //~Vector2d();

       void setx(double Value) { x = Value; }
       double getx() { return x; }

       void sety(double Value) { y = Value; }
       double gety() { return y; }

       Vector2d sum(Vector2d);
       Vector2d sub(Vector2d);
       Vector2d mult(double);
       double scalarMult(Vector2d);

       double tangensAngle(Vector2d);
       double vectorLength();
       
       void print(void);

       Vector2d operator+(const Vector2d& vector) const;
       Vector2d operator-(const Vector2d& vector) const;
       Vector2d operator*(double Value) const;
       double operator*(Vector2d Vector) const;

       Vector2d& operator++();
       Vector2d operator++(int);

       Vector2d& operator--();
       Vector2d operator--(int);

       const Vector2d& operator += (const Vector2d&);
       const Vector2d& operator -= (const Vector2d&);
       const Vector2d& operator *= (const Vector2d&);

       operator string() const;
};

