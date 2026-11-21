#include<iostream>
using namespace std;

int main(){


  bool isStudent;
  cout<<"Are you a student (1 for yes and 0 for no)? "<<endl;
  cin>> isStudent;

  int userCups;
  cout<<"How many cips of tea have you purchased "<<endl;
  cin>>userCups;

  if(isStudent || userCups > 15){
    cout<<"You are eligible for the discount "<<endl;
  }else{
    cout<<"You are not eligible for the discount "<<endl;
  }





  return 0;
}