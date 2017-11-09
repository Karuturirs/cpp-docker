#include<iostream>

using namespace std;

class constuctordes{
private:
  int value;
public:
  constuctordes(){
    value=0;
    cout << "Default constructor" <<endl;
  }
  constuctordes(int val){
    value=val;
    cout << "single parameterized constructor" <<endl;
  }
  ~constuctordes(){  //destructor
    cout << "object destructor" <<endl;
  }
  void setValue(int val){
    value = val;
  }
  int getValue(){
    return value;
  }
  int incBy1(){
    return value+1;
  }
};
