/**************************************************************************
* AUTHORS       : Nisha Davankar
* Student IDs   : 1045735
* Assignment    : 6
* CLASS         : CS1C
* SECTION       : MW 5pm
* DUE DATE      : 03/04/19
**************************************************************************/

#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Shape
{
public:
	Shape();
	~Shape();
	virtual void calcPerimeter()const = 0;
	virtual void calcArea()const = 0;
};

class Square : public Shape
{
public:
	Square(double doubleSquare);
	~Square();
	void calcPerimeter()const;
	void calcArea()const;

private:
	double squareSide;
};

class Triangle: public Shape
{
public:
	Triangle(double doubleSide1, double doubleSide2, double doubleSide3);
	~Triangle();
	void calcPerimeter()const;
	void calcArea()const;
private:
	double triSide1;
	double triSide2;
	double triSide3;
};