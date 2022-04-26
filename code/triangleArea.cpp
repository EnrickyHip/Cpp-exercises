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
  cout << area;
  
  return 0;
}