#include<iostream>
using namespace std;

int main(){
  int userCups;
  cout<<"Enter the toal number of cups you want: "<<endl;
  cin>>userCups;

  double pricePerCup, totalPrice, discountedPrice;
  cout<<"Enter the price per cup: "<<endl;
  cin>>pricePerCup;


  totalPrice = userCups*pricePerCup;

  //apply 5% discount if the total price is above 500


  if(totalPrice > 100){
      discountedPrice = totalPrice - (totalPrice*0.05);
      cout << "Total price after discount: " << discountedPrice << endl;
  }else{
    cout<<"Total Price is "<<totalPrice<<endl;
  }

  return 0;
}