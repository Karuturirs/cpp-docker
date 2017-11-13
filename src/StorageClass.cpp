#include<iostream>
using namespace std;

/**
Storage class is for definition and declaration of the varaibles
a) auto (normal declaration, memory is created in stack)
b)register (Allocation of CPU register to variables, speeds up the execution time.
            Memory is not refered when such varaiables are used.
            can not create more than 2-3. Better if using for loops)
c)static (static storage class is allowed to define a variable
          whose scope is resticted to either a block or a function or a file(but not all files in multi mode programming).
          global or local static variable memory allocation is  done in global heap.
          Global static has scope restiction to a file)
d)extern (when progam spans across different files, there can be use of global varaiables.
          a global varaible can be declared in a file only once and the stame variable can be declared with
          extern may times in other files. As all are refered to same memory allocation,
           any chages made in any function of any file can impact the value.)
*/
void printCount(){
  static int x=1;
  x=x+2;
  cout << "number now is:" <<x<< endl;
}
int main(){
  char name[10];
  register int i;
  cout << "Enter name:";
  cin >> name;
  cout << "Reverse name:";
  for (i=strlen(name)-1; i>=0; i--){
    cout << name[i];
  }
  cout << endl;

  printCount();
  printCount();
  printCount();
  return 0;
}


/*
// file1.cpp
int a; //global varaibale definition

function1(){
....
..
}

function2(){
.. ..
..

}

// file2.cpp
extern int a; // global varaible declaration
function 3(){
..
..
}
function4(){
..
..
}
*/
