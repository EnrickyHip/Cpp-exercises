#include <iostream>
#include <string.h>
using namespace std;

int getCaracsSum(int num){
  long long int rest;
  string numString = to_string(num);
  int sum = 0;

  for (int i = 0; i < numString.length(); i++){
    rest = num % 10;
    sum = sum + rest;
    num = num / 10;
  }

  return sum;
}

int main(){
  long long int num;
  cout << "digit a number: ";
  cin >> num;

  int sum = getCaracsSum(num);

  cout << "------------------------------------------" << endl;
  cout << endl;
  cout << "sum of the digits: " << sum << endl;;
  cout << endl;
  cout << "------------------------------------------" << endl;

  return 0;
}