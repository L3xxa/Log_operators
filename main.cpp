#include <iostream>
using namespace std;

int main() {
	int a, tus, sot, des, od;

	cout << "Enter a four-digit number: ";
	cin >> a;

	if (a < 1000 || a > 9999) {
		cout << "\033[31m Invalid input. Please enter a four-digit number.\033[0m" << endl;
	}
	else {
		tus = a / 1000;
		sot = (a / 100) % 10;
		des = (a / 10) % 10;
		od = a % 10;

		cout << "New number: \033[32m" << sot << tus << od << des << "\033[0m" << endl;
	}

	return 0;
}