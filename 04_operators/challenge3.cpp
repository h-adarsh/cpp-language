#include<iostream>
using namespace std;

int main(){

  int userCups;
  cout<<"Enter the number of cups you have: "<<endl;
  cin>>userCups;

  if(userCups > 20){
    cout<<"You will get a GOLD badge."<<endl;
  }else if(10 <= userCups && userCups <= 20){
    cout<<"You will get a SILVER badge"<<endl;
    
  }else{
    cout<<"NO BADGE FOR YOU"<<endl;

  }




  return 0;
}