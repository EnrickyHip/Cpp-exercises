#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
  double base;
  double height;

  cout << "digit the base and height of the triangle: ";
  cin >> base >> height;

  double area = (base * height) / 2;

  cout << "------------------------------------------" << endl;
  cout << endl;
  cout << "the area of the triangle is: " << area << endl;
  cout << endl;
  cout << "------------------------------------------" << endl;
  
  return 0;
}