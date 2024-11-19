#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int a, b;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter another number: ";
	cin >> b;

	if (a < b) {
		cout << a << " is less than " << b << endl;
	}
	else if (a == b) { 
		cout << a << " is equal to " << b << endl;
	}
	else {
		cout << b << " is less than " << a << endl;
	}
	
}