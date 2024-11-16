#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    string par = (a % 2 == 0) ? "Parne" : "Ne parne";
    cout << par;
    _getch();
    return 0;
    
}

