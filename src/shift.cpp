#include<iostream>

using namespace std;

int main(){

  int a, shift,result;
  cout << "Enter the number:";
  cin >> a;
  cout << "Enter the shift count:";
  cin >> shift;

  result = a >> shift & 1;

  cout << "result :" << result <<endl ; //a/(2^shift)=" << (a/(2^shift));


  return 0;
}
