#include<iostream>
#include<string>
using namespace std;
int main(){

  double pricePerCup = 2.5, totalPrice, discount ;

  int userCups;
  cout<<"Enter the number of cups you have ordered: "<<endl;
  cin>>userCups;

  totalPrice = pricePerCup*userCups;

  if(userCups > 20){
    discount = 0.20;
  }else if(userCups >= 10 && userCups <= 20){
    discount = 0.10;
  }else{
    discount = 0;
  }

  totalPrice -= (totalPrice*discount);


  cout<<"The total price after disocunt is: "<<totalPrice<<endl;

  return 0;
}