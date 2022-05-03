#include <iostream>
#include <string.h>
using namespace std;

double get_avarage(double grades[], int grades_number){
  double sum = 0;

  for(int i = 0; i < grades_number; i++){
    sum += grades[i];
  }

  return sum / grades_number;
}

int main(){
  int grades_number;

  cout << "digit the number of grades: ";
  cin >> grades_number;

  double grades[grades_number];

  cout << "digit the grades: ";
  for(int i = 0; i < grades_number; i++){
    cin >> grades[i];
  }

  const double average = get_avarage(grades, grades_number);

  cout.precision(2);

  cout << "------------------------------------------" << endl;
  cout << endl;
  cout << "your avarage grade: " << average << endl;
  cout << endl;
  cout << "------------------------------------------" << endl;
  
  return 0;
}