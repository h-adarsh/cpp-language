#include<iostream>
using namespace std;

int main(){
  int userTeaBags;
  cout<<"Enter the number of tea bags you have: "<<endl;
  cin>>userTeaBags;

  //if they have less than 10 give them 5 extra

  if(userTeaBags<10){
    userTeaBags+=5;
    cout<<"Your total number of tea bags are "<<userTeaBags;
  }
  cout<<"Your total number of tea bags are "<<userTeaBags;
}