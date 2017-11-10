#include<iostream>
using namespace std;
template<class T>
inline T sqr(T x){
  return x*x;
}

int main(){
  float a;
  cout << "Enter a number:";
  cin >> a;
  cout << "square of the number " << a << " is: " << sqr(a) <<endl;
  return 0;
}
