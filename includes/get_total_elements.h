#ifndef GET_TOTAL_ELEMENTS_H
#define GET_TOTAL_ELEMENTS_H

#include <iostream>

int get_total_elements(double array[], int array_size){
  return array_size / sizeof(array[0]);
}

#endif