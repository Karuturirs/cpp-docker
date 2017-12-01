#include<iostream>
#include<stdarg.h>
using namespace std;

int add(int argc, ...){
  int result,num;
  va_list args;
  va_start(args,argc);
  result=0;
  for(int i=0;i<argc; i++){
    num = va_args(args,i);
    result += num;
  }
  va_ends(args);
  return result;
}

int main(){
  int sum1,sum2;
  sum1 = add(4,1,10,23,44);
  sum2 = add(1,10);
  cout << sum1 << " " <<sum2;
  return 0;
}
