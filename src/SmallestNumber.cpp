#include<iostream>

using namespace std;

int main(){
 int i, small, n, *ptr,a[50];
 cout << "Enter the size of the array:" ;
 cin >> n;
 cout << "Enter "<< n << "numbers"<<endl;
 for(i=0; i< n; i++)
  cin >> a[i];

 ptr =a;

small = *ptr;
ptr++;

for(i=1; i<n; i++){
  if(small > *ptr){
    small = *ptr;
  }
  ptr++;
}

 cout << "Smallest number in the array is:" << small <<endl ;



}
