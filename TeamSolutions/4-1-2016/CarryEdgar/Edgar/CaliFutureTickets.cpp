// CaliFutureTickets.cpp : Defines the entry point for the console application.
// Problem # 7 Highway Patrol

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const float BASEFEE = 150.00;
	const float OVERCHARGE = 5.00;
	const int DIST = 5;	
	int spdLimit, entryTime, exitTime = 0;
	float timeTaken, speed;
	string licPlateNumber = "";

	cout << "Please enter LICENSE PLATE NUMBER : ";
	cin >> licPlateNumber;
	cout << endl;
	cout << "Please enter ENTRY TIME : ";
	cin >> entryTime;
	cout << endl;
	cout << "Please enter EXIT TIME : ";
	cin >> exitTime;
	cout << endl;
	cout << "Please enter SPEED LIMIT : ";
	cin >> spdLimit;
	cout << endl;

	timeTaken = exitTime - entryTime;

	// checking manual entry
	if (entryTime >= exitTime){
		cout << "Time entry invalid.\n";
	}
	else{
		speed = (DIST / timeTaken)*60;

		// not needed, checking calcs.
		cout << "Driver was going " << speed << " in a zone of " << spdLimit << endl;

		if (speed > spdLimit)
		{
			cout << "Issue ticket to " << licPlateNumber << " for " << 150 + ((speed-spdLimit)*OVERCHARGE) << endl;
		}

		else{
			//not needed
			cout << "Speed Acceptable." << endl;}
	}

	system("pause");
	return 0;
}

