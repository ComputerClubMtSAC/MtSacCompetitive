#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

//function prototypes
void calcMid(arrX[], arrY[], midX, midY); 

const int SIZE=3;
int main()
{
	cout << "Author: Sydney Pun" << endl; 

	//declaring variables
	int X1, Y1, X2, Y2, X3, Y3;
	int arrX[SIZE], arrY[SIZE]; 
	int smallestX, smallestY, midX, midY; 


	//cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;// 

	for (int i=0; i < 6; i+2)
	{
		cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3; //read every other value into array, need to fix this

		if (arrX[i+1] < arrX[i])
			arrX[i+1] = smallestX; 
	}

	for (int j=1; j<5; j+2)
	{
		cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3; //read every other value into array, need to fix this
		
		if (arrY[j+1] < arrY[j])
			arrY[j+1] = smallestY;
	}
	calcMid(arrX[SIZE], arrY[SIZE], midX, midY);  // fix this BS
	return 0;
}

void calcMid(arrX[], arrY[], midX, midY)
{
	for (int k=0; k<3; k++)
	{
		midX = arrX[K/2]; //fix this midpoint formula
		cout << midX; 
	}
	 
	for (int z=0; z<3; z++)
	{
		mid = arrY[z/2]; //fix this midpoint formula 
		cout << midY; 
	}
}
		
	