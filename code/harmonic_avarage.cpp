#include <iostream>
#include <string.h>
#include "../includes/sort_array.h"

using namespace std;

double get_harmonic_avarage(double grades[], int grades_number){
  double sum = 0;

  for(int i = 0; i < grades_number; i++){
    if (grades[i] == 0) {
      return 0;
    }
    sum += (1 / grades[i]);
  }

  return grades_number / sum;
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

  double harmonic_avarage = get_harmonic_avarage(grades, grades_number);

  if(harmonic_avarage > 0){
    if(harmonic_avarage < 6){
      sort_array(grades, grades_number);
      cin >> grades[0]; //substitute the minor number

      harmonic_avarage = get_harmonic_avarage(grades, grades_number);
    }
  }

  cout << "-------------------------------" << endl;
  cout << endl;
  cout << harmonic_avarage << endl;
  cout << endl;
  cout << "-------------------------------" << endl;

  return 0;
}