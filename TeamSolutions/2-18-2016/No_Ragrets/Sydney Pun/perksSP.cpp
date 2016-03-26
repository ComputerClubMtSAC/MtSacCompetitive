//AUTHOR: SYDNEY PUN 
#include <string>
#include <iostream>
#include <iomanip>

//Function Prototypes
void calcDiscount (string progLang, int numP, double price[]); 
void printOutput (double dPrice);

using namespace std; 

const int SIZE = 10; 

int main()
{
	//Declaring Variables
	int numP;
	double price[SIZE];
	//double dPrice; //edit this variable later 
	string answer; 
	string progLang; 

	cin >> numP >> answer >> progLang;	
	
	for (int index = 0; index < numP; index++)  //edit this line of code
	{ 
		cin >> price[index]; //put the prices into an array 
	}

	if (answer == "yes")
	{
		calcDiscount (progLang, numP, price[SIZE]);
		printOutput (price[SIZE]);
	}
	else //Fix this else statement later 
	{
		printOutput (price[SIZE]);
	}
	return 0;
}
void calcDiscount (string progLang, int numP, double price[])
{
	//Declaring Variables 

	if (progLang != "COBOL")
	{
		for (int i = 0; i < numP; i++)
		{
			price[i] * .90; 
		}
	}
	else if (numP >= 2) 
	{
		for (int j = 0; j < numP; j++)
		{
			price [j] * .85; 
		}
	}
	else if (numP>= 5)
	{
		for (int k = 0; k < numP; k++)
		{
			price[k] * .90; 
		}
	}
}
void printOutput (double price[])
{
	int numP; 

	for (int p = 0; p < numP; p++)
	{
		cout << " " << price[p] << " "; 
	}
}
