#include<iostream>
using namespace std;

class color2{
  enum Color {red, blue, green}; //red =0 , blue =1, green =2
  public:
  void printcolor(Color c){
    char const *color;
    switch(c){
      case red:
        color = "red";
        break;
      case blue:
        color = "blue";
        break;
      case green:
        color = "green";
        break;
     cout << "You are assigning the color: " << color << "in color2.cpp"<< endl;
    }
  }
};
