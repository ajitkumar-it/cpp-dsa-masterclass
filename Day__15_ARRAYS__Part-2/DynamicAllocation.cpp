#include<iostream>
using namespace std;
int main(){
  int arr[7]={}; // STATIC Array , initialized with 0

  arr[0] = 4;
  for (int i = 0; i < 7;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  int* brr = new int[7](); // DYNAMIC Array, initialised with 0
  brr[0] = 8;
  for (int i = 0; i < 7; i++)
  {
    cout << brr[i] << " ";
  }

}