#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() 
{
int licenseplate;
int timeatA = 0;
int timeatB = 0;
int speedlimit;
int x;
int ticketprice;
int timeAtoB;
int mph;
cout << "Enter license plate number\n";
cin >> licenseplate;
cout << "Enter time when the car hit checkpoint A\n";
cin >> timeatA;
cout << "Enter time when the car hit checkpoint B\n";
cin >> timeatB;
timeAtoB = timeatB - timeatA;
cout << "Enter the speed limit of the Zone\n"; 
cin >> speedlimit;
mph = 5/(timeAtoB/60);
if (mph > speedlimit)
{
x = mph - speedlimit;
ticketprice = 150 + 5*x;
cout << "Issue ticket to"<< licenseplate << "for" << ticketprice;
}
else if(mph < speedlimit)
{
cout<< "No ticket";
}
return 0;
}