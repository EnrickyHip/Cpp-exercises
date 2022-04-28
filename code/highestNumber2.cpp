//using ternary operator instead if else.
#include <iostream>
#include <string.h>
using namespace std;

int main(){

  double num1;
  double num2;

  cout << "digit two numbers: ";
  cin >> num1 >> num2;

  const double highest = (num1 > num2) ? num1 : num2; 

  cout << "------------------------------------------" << endl;
  cout << endl;
  cout << "highest number: " << highest << endl;
  cout << endl;
  cout << "------------------------------------------" << endl;    

  return 0;
}