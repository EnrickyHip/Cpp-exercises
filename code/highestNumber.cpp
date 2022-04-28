#include <iostream>
#include <string.h>
using namespace std;

int main(){

  double num1;
  double num2;

  cout << "digit two numbers: ";
  cin >> num1 >> num2;

  double highest;

  if (num1 > num2) highest = num1;
  else highest = num2;

  cout << "------------------------------------------" << endl;
  cout << endl;
  cout << "highest number: " << highest << endl;
  cout << endl;
  cout << "------------------------------------------" << endl;    

  return 0;
}