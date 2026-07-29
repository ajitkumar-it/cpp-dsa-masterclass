#include<iostream>
using namespace std ;
int& trickyUpdate(int &x , int y ){
  x = x + y;
  return x ;// 8 
}
int main(){
  int val = 5;
  trickyUpdate (val , 3) = 25; //VAL--> 8 = 25
  cout << val ; // 25
}