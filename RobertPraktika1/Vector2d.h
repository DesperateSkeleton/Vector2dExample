#pragma once
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

       void sum(Vector2d);
       void sub(Vector2d);
       void mult(double);
       double scalarMult(Vector2d);

       double tangensAngle(Vector2d);
       double vectorLength();
       
       void print(void);

};

