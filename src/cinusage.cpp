#include<iostream>
#include<string>
#include<sstream> //stringstream
using namespace std;

int main(){
  char a[10];
  cout << "Enter a statement with space:";
   cin >>a;
  cout << "-->" << a <<endl;
  string x;
  cout << "Entered a statement:";
  getline(cin,x);
  cout << "-->" << x <<endl;
  string mystr;
  float price =0;
  int quantity =0;
  cout << "Enter a price: ";
  getline(cin,mystr);
  stringstream(mystr) >> price;

  cout << "Enterthe qunatity: ";
  getline(cin,mystr);
  stringstream(mystr) >> quantity;

  cout << "Total price is: " << quantity* price<<endl;
  return 0;
}
