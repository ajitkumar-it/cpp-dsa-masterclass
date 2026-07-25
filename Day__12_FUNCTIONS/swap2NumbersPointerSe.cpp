#include<iostream>
using namespace std;
void swap(int* n1,int* n2){
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}
int main(){
  int a = 5, b = 2;
    cout <<"Before Swap : "<< "a = " << a << " b = " << b <<endl;
  swap(&a, &b);
  cout <<"After Swap : "<< "a = " << a << " b = " << b;
}