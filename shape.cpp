// classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

const double	PI = 3.14159;

class Shape
{
protected:
	double area;
public:
	void print_area() const;
};

void Shape::print_area() const
{
	cout << area << endl;
};

class Triangle : public Shape
{
private:
	double base, height;
public:
	Triangle(double, double);
};

Triangle::Triangle(double b, double h) : base(b), height(h)
{
	area = 0.5*base*height;
}


class Rectangle : public Shape
{
private:
	double width, height;
public:
	Rectangle(double, double);
};

Rectangle::Rectangle(double w, double h) : width(w), height(h)
{
	area = width * height;
}


class Circle : public Shape
{
private:
	double Radius;
public:
	Circle(double);
};

Circle::Circle(double r) : Radius(r)
{
	area = PI * Radius*Radius;
}


class Square : public Shape
{
private:
	double height;
public:
	Square(double);
};

Square::Square(double h) : height(h)
{
	area = height * height;
}



int _tmain(int argc, _TCHAR* argv[])
{
	Triangle t(5.0, 2.0);
	t.print_area();

	Rectangle r(4.0, 6.0);
	r.print_area();

	Circle c(6.0);
	c.print_area();

	Square s(8.0);
	s.print_area();

	int temp = 0;
	cin >> temp;

	return 0;
}

