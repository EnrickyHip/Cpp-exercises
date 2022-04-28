#include <iostream>
#include <string.h>
using namespace std;

int sortArray(int array[], int elementsInArray){
  sort(array, array + elementsInArray);
  return 0;
}

int main(){
  int array[] = {4, 56, 6, 7, -65, 23, 413, -2, 5, 7};
  const int elementsInArray = sizeof(array) / sizeof(array[0]);

  //sizeof(array) get to size of the array in bytes (4 bytes per element)
  //sizeof(array[0] get the size of each element
  //elementInArray is the total elements in array.

  cout << "sizeof array: " << sizeof(array) << endl;
  cout << "sizeof array[0]: " << sizeof(array[0]) << endl;
  cout << "elementsInArray: " << elementsInArray << endl;

  sortArray(array, elementsInArray);
 
  for (int i = 0; i < elementsInArray; i++){
    cout << array[i] << " ";
  }

  return 0;
}