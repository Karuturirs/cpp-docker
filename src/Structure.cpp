#include<iostream>
using namespace std;
struct dateofbirth{
  int date;
  int month;
  int year;
  void show(const char *msg){
    cout << msg << date <<"-"<<month<<"-"<<year<<endl;
  }
};

dateofbirth acceptDOB(){
  dateofbirth dob;
  cout<< "Enter the year you are born:";
  cin >> dob.year;
  cout << "Enter the month you are born:";
  cin >>  dob.month;
  cout << "Enter the date you are born:";
  cin  >> dob.date;
  return  dob;
}

int main(){
  dateofbirth db= acceptDOB();
  cout <<  "--->"  << db.date << "-"<<db.month<< "-"<<db.year <<endl;
  db.show("Date Of Birth is:");
}
