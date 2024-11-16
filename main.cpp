#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	cout << "Enter a first number: ";
	cin >> a;
	cout << "Enter a second number: ";
	cin >> b;

	int max = (a > b) ? a : b;
	cout << "Max = " << max << endl;

	return 0;
}