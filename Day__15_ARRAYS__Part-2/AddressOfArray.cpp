#include<iostream>
using namespace std;
int main(){
  int arr[] = {-62, -35, -5, -1, -88, -34};
  int n = sizeof(arr) / 4;
  cout << arr << endl;      // 0x8b027ffa70 ---- same
  cout << &arr[0] << endl;  // 0x8b027ffa70 ----- same
  cout << &arr[1] << endl;  // 0x8b027ffa74
  cout << &arr[2] << endl;  // 0x8b027ffa78
}