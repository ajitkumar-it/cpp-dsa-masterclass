/*
Q29. Write a function sortTwo(int &a, int &b) using Pass by Reference.
     The function should check the values, and if a > b, it should swap them.
     This ensures the variables in main are always ordered smallest to largest after the call.

     Sample — Input: 15 6 ⇒ Output variables print as: 6 15
*/

#include<iostream>
using namespace std ;
void sortTwo(int &a , int &b){
  if(a > b){
    int temp = a;
    a = b;
    b = temp ;
   }
}
int main(){
  int x , y;
  cin >> x >> y ;
  sortTwo (x , y) ;
  cout << x << " " << y << endl ;
}