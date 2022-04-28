// this code return 0 if the number sent is 0, 1 if it is positive and -1 if it is negative.
// this code uses the ternary operator.

#include <iostream>
#include <string.h>
using namespace std;

int main(){
  double num;
  cout << "digit a number: ";
  cin >> num;

  const int result = (!num ? 0 : num / abs(num));
  cout << result;

  return 0;
}