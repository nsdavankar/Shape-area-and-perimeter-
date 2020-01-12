/**************************************************************************
* AUTHORS       : Nisha Davankar
* Student IDs   : 1045735
* Assignment    : 6
* CLASS         : CS1C
* SECTION       : MW 5pm
* DUE DATE      : 03/04/19
**************************************************************************/
#include "Header.h"

/**************************************************************************
* Triangle::Triangle()
* -------------------------------------------------------------------------
* The constructor for Triangle class
* -------------------------------------------------------------------------
* Input:
*		double doubleSide1
*		double doubleSide2
*		double doubleSide3
**************************************************************************/
Triangle::Triangle(double doubleSide1, double doubleSide2, double doubleSide3)
{
	triSide1 = doubleSide1;
	triSide2 = doubleSide2;
	triSide3 = doubleSide3;
}

/**************************************************************************
* Triangle::~Triangle()
* -------------------------------------------------------------------------
* The destructor for Triangle class
* -------------------------------------------------------------------------
**************************************************************************/
Triangle::~Triangle()
{
}

/**************************************************************************
* void Triangle:: calcPerimeter()
* -------------------------------------------------------------------------
* This function calculates the perimeter for the Triangle class
* -------------------------------------------------------------------------
**************************************************************************/
void Triangle::calcPerimeter()const
{
	double perimeterTri = 0;

	perimeterTri = triSide1 + triSide2 + triSide3;

	cout << "Triangle Perimeter: " << perimeterTri << endl;
}

/**************************************************************************
* void Triangle:: calcArea()
* -------------------------------------------------------------------------
* This function calculates the Area for the Triangle class
* -------------------------------------------------------------------------
**************************************************************************/

void Triangle::calcArea()const
{
	double areaTri = 0;
	double semiPerimeter = 0;
	double multiStep = 0;

	semiPerimeter = (triSide1 + triSide2 + triSide3) / 2;
	multiStep = (semiPerimeter - triSide1) * (semiPerimeter - triSide2)
				* (semiPerimeter - triSide3);
	areaTri = sqrt(semiPerimeter * multiStep);

	cout << "Triangle Area: " << areaTri << endl;
}

