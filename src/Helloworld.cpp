#include <iostream>
#include <Structure.cpp>
#include "swap.hpp"
#include "constuctordes.hpp"

using namespace std;
void diff();

int main(){
  cout << "Hello world" <<endl;
  cout << "Executing successful from C++"<<endl;
  diff();

  // swap.cpp
  char a ,b ;
  cout << " Enter any thing for a,b :" ;
  cin >> a >> b ;
  swapn(a,b);
  cout << "After swapping a , b: " << a << " , " << b << endl;

  // constuctordes.cpp
  constuctordes cd ;
  constuctordes cd2 =2;
  cout << cd.getValue() << " : cd++ =  "  << cd.incBy1() <<endl;
  cout << " : cd2++ =  " << cd2.incBy1() <<endl;


  return 0;
}

//variables, reference variables and pointers
void diff(){
  int x =10;
  int &k =x;
  int z=15;
  k =z;
  int *p =&x;
  cout << " p :" << p << " *p :"<< *p <<endl;
  z=100;
  p = &z;

  cout << " x :" << x << " z :" << z << " k : "<< k << " p : " << p << endl;
  cout << " &x :" << &x << " &z :" << &z << " &k : "<< &k << " *p :" << *p <<endl;

}
