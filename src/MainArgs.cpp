#include<iostream>
using namespace std;


int main(int argc, char *argv[]){
  cout << "Number of Arguments = " << argc;
  cout << "\nProgramm name = " << argv[0];
  cout << "\nArgument vectors are:\n";
  for(int i=0; i< argc; i++){
    cout << argv[i] <<endl;
  }
  return 0;
}
