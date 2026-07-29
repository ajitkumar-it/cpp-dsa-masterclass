#include<iostream>
using namespace std ;
int val = 50;
int main (){
  int val = 15;
  cout << val << " " << ::val ; // 15  50
}