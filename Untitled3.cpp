#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
// Function prototypes
double ConvertToMPH(int paceMin, int paceSec);
double ConvertToMPH(double kph);
// ======================
// ConvertToMPH
// Converts a pace in minutes/seconds per mile into
// miles per hour.
// ======================
double ConvertToMPH(int paceMin, int paceSec)
{
int secspermile;
double mph;
// Convert pace to seconds per mile
secspermile = paceMin * 60 + paceSec;
// Convert to miles per hour. 1/secspermile is miles/second and then
// scale to one hour by multiplying by 3600 seconds/hour
mph = (1 / static_cast<double>(secspermile)) * 3600;
return mph;
}
// ======================
// ConvertToMPH
// Converts a pace in kilometers per mile into
// miles per hour.
// ======================
double ConvertToMPH(double kph){
	double mph;
	mph = kph / 1.61;
	return mph;
}

int main(){
cout << "5:30 pace is " << ConvertToMPH(5,30) << " MPH." << endl;
cout << "7:30 pace is " << ConvertToMPH(7,30) << " MPH." << endl;
cout << "8:00 pace is " << ConvertToMPH(8,0) << " MPH." << endl;
cout << "10 kph is " << ConvertToMPH(10) << " MPH." << endl;
cout << "20 kph is " << ConvertToMPH(20) << " MPH." << endl;
cout << "120 kph is " << ConvertToMPH(120) << " MPH." << endl << endl;
}
