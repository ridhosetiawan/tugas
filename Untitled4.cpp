#include <iostream>
using namespace std;
// Function prototypes
bool ConvertToLowestTerms(int &numerator, int &denominator);
bool ConvertToLowestTerms(int &numerator, int &denominator)
{
if (denominator == 0)
return false;
// First, find the greatest common divisor
// by starting with the smaller value and
// subtracting 1 until we get a number that
// evenly divides both numerator and denominator.
// There are faster algorithms (e.g. Euclid's)
int gcd = denominator;
if (gcd > numerator)
gcd = numerator;
while (((numerator % gcd) != 0) ||
((denominator % gcd) != 0))
{
gcd--;
}
numerator /= gcd;
denominator /= gcd;
return true;
}

int main( )
{
int numerator, denominator;
numerator = 10;
denominator = 5;
cout << numerator << "/" << denominator << " = ";
ConvertToLowestTerms(numerator, denominator);
cout << numerator << "/" << denominator << endl;
numerator = 43;
denominator = 13;
cout << numerator << "/" << denominator << " = ";
ConvertToLowestTerms(numerator, denominator);
cout << numerator << "/" << denominator << endl;
numerator = 60;
denominator = 40;
cout << numerator << "/" << denominator << " = ";
ConvertToLowestTerms(numerator, denominator);
cout << numerator << "/" << denominator << endl;
numerator = 100;
denominator = 55;
cout << numerator << "/" << denominator << " = ";
ConvertToLowestTerms(numerator, denominator);
cout << numerator << "/" << denominator << endl;
cout << "Enter a character to exit." << endl;
char wait;
cin >> wait;
return 0;
}
