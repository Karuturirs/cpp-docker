#include<iostream>
using namespace std;

int main(){
  PrintLine();
  PrintLine('!');
  PrintLine('#',12);
  PrintLine('*',34,2);
  return 0;
}

void PrintLine(char ch='~', int row=70, int column =1){
  int i,j;
  for(int i=0; i<column ; i++){
    for(int j=0; j<rows; j++){
      cout << ch;
    }
    cout <<endl;
  }
}
