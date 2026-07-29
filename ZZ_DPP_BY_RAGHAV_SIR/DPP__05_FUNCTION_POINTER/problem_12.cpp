#include<iostream>
using namespace std ;
int num = 100;
void compute(int num){
  num = num + :: num ;
  cout << num << " ";
}
int main () {
  compute (20) ;//120
  cout << num ;//100
}