#include<iostream>
#include <iomanip>   // needed for setprecision
using namespace std;
int main(){

  int teaLeaves = 50;
  float waterTemp = 85.54567890;
  double priceOfTea = 299.99;
  char teaGrade = 'A';
  bool isTeaReady = false;

  cout<<waterTemp<<endl;
  cout << setprecision(7) << waterTemp << endl;

  return 0;
}