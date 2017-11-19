#include <iostream>
using namespace std;
void input(int& hours24, int& minutes);
void convert(int& hours, char& AMPM);
void output(int hours, int minutes, char AMPM);
int main(){
	int hours, minutes;
	char AMPM, ans;
	do{
		input(hours, minutes);
		convert(hours, AMPM);
		output(hours, minutes, AMPM);
		cout << "Enter Y or y to continue, anything else quits."<< endl;cin >> ans;
	}while('Y'== ans || 'y' == ans);
		return 0;
}

void input(int& hours24, int& minutes){
	char colon;
	cout << "Enter 24 hour time in the format HH:MM "<< endl;cin >> hours24 >> colon >> minutes;
}

void convert(int& hours, char& AMPM){
if(hours > 12) // definitely in the afternoon
{
hours = hours - 12;
AMPM = 'P';
}else if (12 == hours) // boundary afternoon hour
AMPM = 'P'; // but hours is not changed.
else if (0 == hours) // boundary morning hour
{
hours = hours + 12;
AMPM = 'A';
}else // (hours < 12) // definitely morning hour
AMPM = 'A'; // hours is unchanged
}

void output(int hours, int minutes, char AMPM){
	cout << "Time in 12-hour format: " << endl<< hours << ":" << minutes << " "<< AMPM << 'M' << endl;
}
