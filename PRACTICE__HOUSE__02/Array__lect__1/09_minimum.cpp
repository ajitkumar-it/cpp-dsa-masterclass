#include<iostream>
using namespace std;
int main(){
  int arr[] = {34, 78, 99, 67, 45, 33, 98};
  int n = sizeof(arr) / 4;
  int minimum = INT_MAX;
  for (int i = 0; i < n;i++){
    if(arr[i]<minimum)
      minimum = arr[i];
  }
  cout << "Minimum = " << minimum;
}