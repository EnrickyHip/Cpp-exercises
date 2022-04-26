#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
  double side;

  cout << "digit the value of the sides: ";
  cin >> side;

  double area = pow(side, 2);
  cout << "the area of the square is: " << area;
  
  return 0;
}