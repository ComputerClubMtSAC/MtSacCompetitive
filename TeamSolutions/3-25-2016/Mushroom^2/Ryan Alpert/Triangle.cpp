#include <iostream>
#include <math.h>

using namespace std;


void midpoint(int Xs, int Xf, int Ys, int Yf){
	int X = (Xs + Xf) / 2;
	int Y = (Ys + Yf) / 2;
	cout << X << " " << Y << endl;
}

void main(){
	
	int X1, X2, X3, Y1, Y2, Y3, l1, l2, l3;
	bool firstLow;

	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;

	l1 = sqrt(pow((X2 - X1),2) + pow((Y2 - Y1),2));
	l2 = sqrt(pow((X3 - X2),2) + pow((Y3 - Y2),2));
	l3 = sqrt(pow((X1 - X3),2) + pow((Y1 - Y3),2));

	if (l1 == l2){
		firstLow = ((Y2 - Y1) <= (Y3 - Y2));
		if ((l1 == l3) && (firstLow == true)){
			firstLow = ((Y2 - Y1) <= (Y1 - Y3));
			if (firstLow = true){
				midpoint(X1, X2, Y1, Y2);
			}
			else{
				midpoint(X3, X1, Y3, Y1);
			}
		}
		else if((l1 == l3) && (firstLow == false)){
			firstLow = ((Y3 - Y2) <= (Y1 - Y3));
			if (firstLow = true){
				midpoint(X2, X3, Y2, Y3);
			}
			else{
				midpoint(X3, X1, Y3, Y1);
			}
		}
		else {
			firstLow = ((Y2 - Y1) <= (Y3 - Y2));
			if (firstLow == true){
				midpoint(X1, X2, Y1, Y2);
			}
			else{
				midpoint(X2, X3, Y2, Y3);
			}
		}
	}
	
	else if (l1 == l3){
		firstLow = ((Y2 - Y1) < (Y1 - Y3));
		if (firstLow == true){
				midpoint(X1, X2, Y1, Y2);
			}
			else{
				midpoint(X3, X1, Y3, Y1);
			}
	}
	else if (l2 == l3){
		firstLow = ((Y3 - Y2) < (Y1 - Y3));
		if (firstLow == true){
			midpoint(X2, X3, Y2, Y3);
		}
		else{
			midpoint(X3, X1, Y3, Y1);
		}
	}
	else if ((l1 < l2) && (l1 < l3)){
		midpoint(X1, X2, Y1, Y2);
	}
	else if ((l2 < l1) && (l2 < l3)){
		midpoint(X2, X3, Y2, Y3);
	}
	else{
	midpoint(X3, X1, Y3, Y1);
	}
}