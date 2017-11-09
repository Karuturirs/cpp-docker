#include <iostream>
using namespace std;

// swapping using pass by reference
template<class T>
void swapR(T & x, T & y){
  T z;
  cout << "&x:" << &x << " &y:" << &y << endl;
  z=x;
  x=y;
  y=z;
  cout << "x:" << x << " y:" <<y << endl;
  cout << "&x:" << &x << " &y:" << &y << endl;
}
// swapping using pass by address
template<class T>
void swapA(T *x, T *y){
  T z;
  cout << "*x:" << *x << " *y:" << *y << endl;
  cout << "x:" << x << " y:" <<y << endl;
  z=*x;
  *x=*y;
  *y=z;
  cout << "x:" << x << " y:" <<y << endl;
  cout << "*x:" << *x << " *y:" << *y << endl;
}

// swap using pass by value
void swapV(int x,int y){
  int t;
  t =x;
  x=y;
  y=t;
}

int main(){
  int a,b;
  cout << "Enter two number <a,b>:" << endl;
  cin >> a >> b;
  cout  << "SWAPV --> &a:" << &a << " , &b:"<< &b << endl;
  swapV(a,b);
  cout  << "SWAPV --> a:" << a << " , b:"<< b << endl;
  cout  << "SWAPR --> &a:" << &a << " , &b:"<< &b << endl;
  swapR(a,b);
  cout  << "SWAPR --> a:" << a << " , b:"<< b << endl;

  //cout << "*a:" << *a << " *b:" << *b << endl;
  swapA(&a,&b);
  cout  << "SWAPA --> a:" << a << " , b:"<< b << endl;
  return 0;
}
