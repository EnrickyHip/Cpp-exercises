#include <iostream>
#include <string.h>
using namespace std;

int main(){
    double num1, num2;

    cout << "Digit two numbers: ";
    cin >> num1 >> num2;

    const double sum = num1 + num2;

    cout << "------------------------------------------" << endl;
    cout << endl;
    cout << "sum of the numbers: " << sum << endl;
    cout << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}