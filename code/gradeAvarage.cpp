#include <iostream>
#include <string.h>
using namespace std;

int main(){
  double grade1, grade2, grade3;

  cout << "digit three grades: ";
  cin >> grade1 >> grade2 >> grade3;

  double average = (grade1 + grade2 + grade3) / 3;
  cout << "your avarage grade: " << average;
  
  return 0;
}