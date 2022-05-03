#include <iostream>
#include <string.h>
using namespace std;

int get_caracs_sum(int num){
  long long int rest;
  const string num_string = to_string(num);
  int sum = 0;

  for (int i = 0; i < num_string.length(); i++){
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

  const int sum = get_caracs_sum(num);

  cout << "------------------------------------------" << endl;
  cout << endl;
  cout << "sum of the digits: " << sum << endl;;
  cout << endl;
  cout << "------------------------------------------" << endl;

  return 0;
}