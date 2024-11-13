#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

	srand(time(NULL));               // Seed the random number generator
	int goal = rand() % 100 + 1;     // goal will be 1-100, inclusive

	int guess;

	bool gameover = false;

	int num = 0;

	cout << goal << endl;


	while (gameover == false){


		cout << "give me a random number 1-100: " << endl;
		cin >> guess;
		num++;
		cout << "your guess is " << guess << endl;
		
		//int num;

		int diff = abs(guess - goal);

		if (guess <= 0) {
			cout << guess << " is not 1-100" << endl;
		}
		else if (guess > 100) {
			cout << guess << " is not 1-100" << endl;
		}
		else if (guess == goal) {
			cout << guess << " is correct " << "in " << num << " guesses" << endl;
			gameover = true;
		}
		else if (diff <= 2) {
			cout << "your guess is white hot" << endl;
		}
		else if (diff <= 12) {
			cout << "your guess is very hot" << endl;
		}
		else if (diff <= 30) {
			cout << "your guess is tepid" << endl;
		}
		else if (diff <= 45) {
			cout << "your guess is cool" << endl;
		}
		else if (diff <= 60) {
			cout << "your guess is cold" << endl;
		}
		else {
			cout << "your guess is icy" << endl;
		}

	}
}