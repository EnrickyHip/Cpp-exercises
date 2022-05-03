#include <iostream>
#include <string.h>
#include "../includes/sort_array.h"
#include "../includes/get_total_elements.h"
using namespace std;

int main(){
  double array[] = {4, 6, 7, -23, -65, 23, 413, -2, 5, 7};
  const int elements_in_array = get_total_elements(array, sizeof(array));

  //sizeof(array) get to size of the array in bytes (4 bytes per element)
  //sizeof(array[0] get the size of each element
  //elementInArray is the total elements in array.

  cout << "sizeof array: " << sizeof(array) << endl;
  cout << "sizeof array[0]: " << sizeof(array[0]) << endl;
  cout << "elements_in_array: " << elements_in_array << endl;

  sort_array(array, elements_in_array);
 
  for (int i = 0; i < elements_in_array; i++){
    cout << array[i] << " ";
  }

  return 0;
}