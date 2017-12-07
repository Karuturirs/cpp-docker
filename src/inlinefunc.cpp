#include<iostream>
using namespace std;
template<class T>
inline T sqr(T x){
  return x*x;
}

template<class T, int N>
inline T multiplyofN(T x){
  return x*N;
}
int main(){
  float a;
  cout << "Enter a number:";
  cin >> a;
  cout << "square of the number " << a << " is: " << sqr(a) <<endl;
  cout << "multipy of "<<5 << " with " << a << " is: " << multiplyofN<float,5>(a) <<endl;
  cout << "multipy of "<<6 << " with " << a << " is: " << multiplyofN<float,6>(a) <<endl;
  return 0;
}
