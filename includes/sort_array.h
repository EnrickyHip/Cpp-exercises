#ifndef SORT_ARRAY_H
#define SORT_ARRAY_H

#include <iostream>
using namespace std;

int sort_array(double array[], int elements_in_array){
  sort(array, array + elements_in_array);
  return 0;
}

#endif