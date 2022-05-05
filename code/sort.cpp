#include <iostream>
#include <string.h>
#include "../includes/sort_array.h"
using namespace std;

int main(){
  double array[] = {4, 6, 7, -23, -65, 23, 413, -2, 5, 7, -9832};

  sort_array(array, size(array));
 
  for (auto element : array){
    cout << element << " ";
  }

  return 0;
}