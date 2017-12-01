#include<iostream>
using namespace std;


int main(int argc, char *argv[], char **envp){
  cout << "Number of Arguments = " << argc;
  cout << "\nProgramm name = " << argv[0];
  cout << "\nArgument vectors are:\n";
  for(int i=0; i< argc; i++){
    cout << argv[i] <<endl;
  }

  int i=0;
  while(sizeof(envp)){
    cout << "envp["<<i<<"] = "<<envp[i] <<endl;
    i++;
  }

  return 0;
}
