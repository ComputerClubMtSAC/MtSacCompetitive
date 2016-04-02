#include<iostream>
#include<string>
using namespace std;
int main(){
	string employeeName[100];
	string dayOfWeek[100];
	int wageofday[100];
	int numberofday[100];
	int timeIn[100];
	int timeOut[100];
	float hoursworked[100]; 
	float hourlyWage[100];
	float indweeklyearnings[100]
	float totalweeksearning[4];
	float totalWage;
	bool x=true;

	while(x = true){ 
		 
		int n;
			cout >> "what is the week number, if you want to exit the program type the number 0 ">>endl;
			cin << n;
			if (n == 0){
				x = false;
			}
			else if (n == 1) {
				for (int i = 0; i>100; i++){
					cout >> "please enter name, day of week, time in, time out, and your hourly wage and when you are done simply enter x.">>" ">> " Make sure the day of week's first letter is capatalized"; endl;
					cin << employeeName[i] << dayOfWeek[i]<< timeIn[i]<< timeOut[i]<< hourlyWage[i];
					if (employeeName[i] == "x")
						i = 100;
					if (dayOfWeek[i] == "Monday"){
						numberofday[i] = 1;
					}
					else if (dayOfWeek[i] == "Tuesday"){
						numberofday[i] = 2;
					}
					else if (dayOfWeek[i] == "Wensday"){
						numberofday[i] = 3;
					}
					else if (dayOfWeek[i] == "Thursday"){
						numberofday[i] = 4;
					}
					else if (dayOfWeek[i] == "Friday"){
						numberofday[i] = 5;
					}
					else if (dayOfWeek[i] == "Saturday"){
						numberofday[i] = 6;
					}
					else if (dayOfWeek[i] == "Sunday"){
						numberofday[i] = 7;
					}
					else {
						cout >> " Invalid input, Make sure the day of week's first letter is capatalized";
						
					}

					hoursworked[i] = (timeOut[i] - timeIn[i])/100;
					wageofday[i] = hoursworked[i] * hourlyWage[i];

			



					





				}
			 

			
			}

			else if (n == 2) {
					
					}
			else{
				cout >> "invalid input";

				
			} 

	
	}
	}
	
