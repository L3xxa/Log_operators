#include <iostream>
using namespace std;

int main() {
    int a, digit1, digit2, digit3, digit4, digit5, digit6;
    cout << "Enter a six-digit number: ";
    cin >> a;

    if (a < 100000 || a > 999999) {
        cout << "\033[31mInvalid input. Please enter a six-digit number.\033[0m" << endl;
    }
    else {
       digit1 = a / 100000;
       digit2 = (a / 10000) % 10;
       digit3 = (a / 1000) % 10;
       digit4 = (a / 100) % 10;
	   digit5 = (a / 10) % 10;
       digit6 = a % 10;
    }

	if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
		cout << "\033[32mHappy\033[0m" << endl;
	}
	else {
		cout << "\033[31mNot Happy\033[0m" << endl;
	}

    return 0;
}
