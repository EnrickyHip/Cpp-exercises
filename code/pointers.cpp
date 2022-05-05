#include <iostream>
#include <string.h>
using namespace std;

int main(){
  int var = 2;
  int* p_var = &var;

  cout << "var: " << var << endl;
  cout << "&var: "<< &var << endl;
  cout << "p_var: "<< p_var << endl;
  cout << "*p_var "<< *p_var << endl; //dereference

  cout << endl;
  cout << "strings:" << endl;
  cout << endl;

  const char str[] = {"salve"};
  const char* p_str = str;

  cout << "str: " << str << endl;
  cout << "&str: "<< &str << endl;
  cout << "p_str: "<< p_str << endl;
  cout << "*p_str: "<< *p_str; //dereference

  return 0;
}