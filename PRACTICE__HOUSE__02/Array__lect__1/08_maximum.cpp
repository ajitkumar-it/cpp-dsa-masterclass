#include<iostream>
using namespace std;
int main(){
  int arr[] = {33, 99, 67, 88, 34, 76};
  int n = sizeof(arr) / 4;
  int mx = INT_MIN;
  for(int i = 0; i < n;i++){
    if(arr[i]>mx)
      mx = arr[i];
  }
  cout << "Maximum in Array = " << mx;
}