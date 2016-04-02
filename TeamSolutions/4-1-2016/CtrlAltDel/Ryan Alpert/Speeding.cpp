#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//#5 4/1/16
void main(){
	string plate, oldPlate = "0";
	int t1, t2, speedLimit, time, speed, ticket;
	double realSpeed;

	
	ifstream infile;
	infile.open("file.txt");
	for(int i = 0; i < 10; i++){

		infile >> plate >> t1 >> t2 >> speedLimit;

		if ((oldPlate == plate) == false){	

			time = t2 - t1;
			realSpeed = 5 / ((double) time/60);
			speed = (int) realSpeed;
			if (speed > speedLimit){
				ticket = 150 + 5*(speed - speedLimit);
				cout << "Issue ticket to " << plate << " for " << ticket << endl;
			}
		}
	oldPlate = plate;
	}
}