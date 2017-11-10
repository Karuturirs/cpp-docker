#include<iostream>
using namespace std;

void fun(int i, int j){
  cout << "Entered numbers i is: "<< i << " j: "<<j <<endl;
}

int main(){
  int k = 99;
  int a= k++;
    cout  << " k: " << k << " "<< a<<endl;
//  fun( k,++k); //gives warning 
  cout  << " k: " << k << " "<< a << endl;
  return 0;
}
