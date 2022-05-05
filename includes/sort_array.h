#ifndef SORT_ARRAY_H
#define SORT_ARRAY_H

#include <iostream>
using namespace std;

int sort_array(double array[], int array_size){
  sort(array, array + array_size);
  return 0;
}

#endif