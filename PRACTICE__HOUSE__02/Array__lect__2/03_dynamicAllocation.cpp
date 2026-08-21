#include<iostream>
using namespace std;
int main(){
  int arr[5]; // static
  cout << arr[0] << endl;// garbage
  int *brr = new int[7]; // dynamic
  cout << brr[0]; // 0
}