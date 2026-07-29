#include<iostream>
using namespace std;
int main(){
  int a = 8;
  int* p1 = &a ;
  int** p2 = & p1 ;
  cout << **p2 ; //8--C

}
/*
What does **p2 print?
A. Address of a          B. Address of p1              C. 8                      D. Garbage Value
*/