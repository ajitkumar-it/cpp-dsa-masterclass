#include<iostream>
using namespace std;
int main(){
  int arr[6];
  cout << arr[0] << endl; // garbage
  cout << arr[1] << endl;
  cout << arr[2] << endl;

  int brr[4] = {};
  cout << brr[0] << endl; // default 0
  cout << brr[1] << endl;
  cout << brr[2] << endl;
}