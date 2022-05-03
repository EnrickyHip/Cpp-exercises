// this code return 0 if the number sent is 0, 1 if it is positive and -1 if it is negative.

#include <iostream>
#include <string.h>
using namespace std;

int main(){
  double num;
  cout << "digit a number: ";
  cin >> num;

  if (num == 0) cout << 0;
  else cout << num / abs(num);

  return 0;
}