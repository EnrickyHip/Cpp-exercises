#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
  double side;

  cout << "digit the value of the sides: ";
  cin >> side;

  const double area = pow(side, 2);

  cout << "------------------------------------------" << endl;
  cout << endl;
  cout << "the area of the square is: " << area << endl;
  cout << endl;
  cout << "------------------------------------------" << endl;

  return 0;
}