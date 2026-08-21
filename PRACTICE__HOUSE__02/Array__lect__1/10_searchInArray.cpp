#include<iostream>
using namespace std;
int main(){
  int arr[] = {22, 89, 77, 87, 65, 45, 32, 11, 9, 9};
  int n = sizeof(arr) / 4;
  int target = 89, idx;
  bool isfound = false;
  for (int i = 0; i < n;i++){
    if(arr[i]==target) {
      isfound = true;
      idx = i;
      break;
    }
  }
  if(isfound)
    cout << "Found at index = " << idx;
  else
    cout << "Not, Found in the array";
}