#include<iostream>
using namespace std;
int main(){
  int arr[] = {22, 67, 99, 23, 11, 7, 6, 1};
  int n = sizeof(arr) / 4;
  int mn = INT_MAX;
  for (int i = 0; i < n;i++){
    if(arr[i]<mn)
      mn = arr[i];
  }
  int smn = INT_MAX;
  for (int i = 0; i < n;i++){
    if(arr[i]== mn)
      continue;
    if(arr[i]<smn)
      smn = arr[i];
  }
  
  cout << "MIN = " << mn << " Second Min = " << smn;
}