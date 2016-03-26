// Comp1.cpp : Defines the entry point for the console application.
// edgar gallo

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x1,
		y1 = 0; // coordinate 1
	int x2,
		y2 = 0; // coordinate 2
	int x3,
		y3 = 0; // coordinate 3
	int length1 = 0;
	int length2 = 0;
	int length3 = 0;

	cout << "Enter 1st point coords: ";
	cin >> x1;
	cin >> y1;

	length1 = abs(x1 - y1);

	cout << "Enter 2st point coords: ";
	cin >> x2;
	cin >> y2;

	length2 = abs(x2 - y2);

	cout << "Enter 3st point coords: ";
	cin >> x3;
	cin >> y3;

	length3 = abs(x3 - y3);

	cout << "l1: " << length1 << " l2: " << length2 << " l3: " << length3 << endl;
		
	if (length1)
	{

	}



	//output coordinates of length
	system("pause");
	return 0;
}

