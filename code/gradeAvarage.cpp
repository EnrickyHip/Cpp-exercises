#include <iostream>
#include <string.h>
using namespace std;

int main(){
  double grade1, grade2, grade3;

  cout << "digit three grades: ";
  cin >> grade1 >> grade2 >> grade3;

  const double average = (grade1 + grade2 + grade3) / 3;

  cout.precision(2);

  cout << "------------------------------------------" << endl;
  cout << endl;
  cout << "your avarage grade: " << average << endl;
  cout << endl;
  cout << "------------------------------------------" << endl;
  
  return 0;
}