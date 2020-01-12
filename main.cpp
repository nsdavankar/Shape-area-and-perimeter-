/**************************************************************************
* AUTHORS       : Nisha Davankar
* Student IDs   : 1045735
* Assignment    : 6
* CLASS         : CS1C
* SECTION       : MW 5pm
* DUE DATE      : 03/04/19
**************************************************************************/
#include "Header.h"

void printPerimeter(Shape &someShape);
void printArea(Shape &anotherShape);

/**************************************************************************
* Assignment 6
* -------------------------------------------------------------------------
* This program calculates the perimeter and area of squares and triangles.
* This program uses virtual functions in the shape class to calculate 
* the preimeter and area of objects. This function also read in a name
* from the command line argument. It prints out the second letter of each 
* argument.
* -------------------------------------------------------------------------
**************************************************************************/
int main(int argc, char *argv[])
{
	int index = 0;								//INPUT- int index 

	cout << "Perimeter and Area\n";
	Square spongebob(8.88);
	printPerimeter(spongebob);
	printArea(spongebob);
	Triangle squidWard(5.0, 12.0, 13.0);
	printPerimeter(squidWard);
	printArea(squidWard);
	cout << endl; 

	cout << "Command line arguments\n";
	for (index; index < argc; index++)
	{
		if (index == 0)
		{
			cout << argv[index] << " " << endl;
		}
		else
		{
			cout << argv[index] << " ";
		}
	}
	cout << endl << endl;

	cout << "Second letter of first and last name\n";
	for (index = 1; index < argc; index++)
	{
		string secondletter = argv[index];//INPUT/CALC -string for first 
										//last name
		cout << secondletter[1] << " ";
	}

	cout << endl;
	return 0;
}

/**************************************************************************
* void printPerimeter(Shape &someShape)
* -------------------------------------------------------------------------
* This function prints the perimenter by calling the calc perimeter 
* function
* -------------------------------------------------------------------------
* INPUT:
*		Shape &someShape- Shape type object
**************************************************************************/
void printPerimeter(Shape &someShape)
{
	someShape.calcPerimeter();
}

/**************************************************************************
* void printArea(Shape &anotherShape)
* -------------------------------------------------------------------------
* This function prints the area by calling the calc perimeter 
* function
* -------------------------------------------------------------------------
* INPUT:
*		Shape &anotherShape- Shape type object
**************************************************************************/
void printArea(Shape &anotherShape)
{
	anotherShape.calcArea();
}

