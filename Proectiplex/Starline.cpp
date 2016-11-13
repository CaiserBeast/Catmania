#include <iostream>
using namespace std;
void repchar(char, int);
void starline();
int main() {
	starline();
	char word;
	int copyOne;
	cout << "Write a letter to copy - ";
	cin >> word;
	cout << "Write a number of copies of a letter - ";
	cin >> copyOne;
	repchar(word, copyOne);
	starline();
	
	system("PAUSE >> NULL");
	return 0;
}
void starline() {
	for (int j = 0; j < 100; j++)
		cout << '-';
	cout << endl;
		
}
void repchar(char ch, int it) {
	for (int copy = 0; copy < it; copy++)
		cout << ch;
	cout << endl;

}