#include <iostream>
using namespace std;
void catmania(int me);
void catkiller(int Kill1);
void catliker();

int main() {
	char ch1;
	char ch2;
	int catTime;
	int kitKill;
	char ch3;
	cout << "Do you like cats? (y, n) - ";								// Questioning for like cats or don't
	cin >> ch1;
		if (ch1 = 'y') {												// If like we ask how man times
			cout << "Do you like them a lot? (y, n) - ";				// Question if user like
			cin >> ch2;
			if (ch2 = 'y') {											// If user likes them a lot we
				cout << "How many times do you like cats? - ";          // ask how many times he love them
				cin >> catTime;
				catmania(catTime);
				}
		else {                                                          // If user dont like cats
			if (ch1 = 'n') {
			cout << "You really hate them? (y, n) - ";					// We ask if he hates them
					cin >> ch3;
					if (ch3 = 'y') {									// If he really hate them we
						cout << "How many kittens you would kill? - ";	// We ask how many kittens he would kill
							cin >> kitKill;
						catkiller(kitKill);								// Then we start catkiller function
					}
					else {												// If he not enough hate them
						if (ch3 = 'n') {
							catliker();									// We start the catliker func
						}
					}
				}
			}
						}
	system("PAUSE >> NULL");
	return 0;
}
void catmaina(int me) {													// catmania func
	RAND_MAX 30;
	int ra;
	rand(ra);
	for (ra = 0; int z = 0; z < me; me++)
	cout << "meow";
		for (ra = 1; int z = 0; z < me; me++)
			cout << "murr";
}
void catkiller(int Kill1) {												// catkiller func
	int ra1;
	RAND_MAX 1;
	rand(ra1);
	if (ra1 = 0)
		for (int j = 0; j < Kill1; j++)
			cout << "woof";
	if (ra1 = 1)
		for (int j = 0; j < Kill1; j++)
			cout << "rrrr";
}
void catliker() {														// catliker func
	int ra2;
	RAND_MAX  30;
	rand(ra2);
	cout << "Please, like us, we are very pretty! (";
		for (int k = 0; k < ra2; k++)
			cout << "meow ";
	cout << "meow).";

}