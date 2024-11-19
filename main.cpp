#include <iostream>
using namespace std;

int main() {
	int first, second, third, fourth, fifth, sixth, seventh;
	cout << " Enter a first number: ";
	cin >> first;
	cout << " Enter a second number: ";
	cin >> second;
	cout << " Enter a third number: ";
	cin >> third;
	cout << " Enter a fourth number: ";
	cin >> fourth;
	cout << " Enter a fifth number: ";
	cin >> fifth;
	cout << " Enter a sixth number: ";
	cin >> sixth;
	cout << " Enter a seventh number: ";
	cin >> seventh;

	if (first > second && first > third && first > fourth && first > fifth && first > sixth && first > seventh) {
		cout << "MAX =" << first << endl;
	}
	else if (second > first && second > third && second > fourth && second > fifth && second > sixth && second > seventh) {
		cout << "MAX =" << second << endl;
	}
	else if (third > first && third > second && third > fourth && third > fifth && third > sixth && third > seventh) {
		cout << "MAX =" << third << endl;
	}
	else if (fourth > first && fourth > second && fourth > third && fourth > fifth && fourth > sixth && fourth > seventh) {
		cout << "MAX =" << fourth << endl;
	}
	else if (fifth > first && fifth > second && fifth > third && fifth > fourth && fifth > sixth && fifth > seventh) {
		cout << "MAX =" << fifth << endl;
	}
	else if (sixth > first && sixth > second && sixth > third && sixth > fourth && sixth > fifth && sixth > seventh) {
		cout << "MAX =" << sixth << endl;
	}
	else if (seventh > first && seventh > second && seventh > third && seventh > fourth && seventh > fifth && seventh > sixth) {
		cout << "MAX =" << seventh << endl;
	}
	return 0;
}
