#include<iostream>
using namespace std;

int main(){
  void *flexptr;
  int i=100;
  flexptr = &i;
  cout << "*flexptr is :" << *((int *)flexptr) << endl;

  int *aa;
  aa = &i;
  aa++;
  cout << "-->" << &aa << "  :" << *aa << "  "<< &i<< " "<< aa<<   endl;

  return 0;
}
