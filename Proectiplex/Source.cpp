#include <iostream>;
using namespace std;
struct time {
	int hours;
	int minutes;
	int seconds;
}
int main() {
	time timeOne;
	cout << "Write the hour - ";
	cin >> timeOne.hours;
	cout << "Write the minutes - ";
	cin >> timeOne.minutes;
	cout << "Write the seconds - ";
	cin >> timeOne.seconds;

	long totalsec = timeOne.hours * 3600 + timeOne.minutes * 60 + timeOne.seconds;
	cout << "Total number of seconds is " << totalsec << ".";
	system("PAUSE >> NULL");
	return 0;

}