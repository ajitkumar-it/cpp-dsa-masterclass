#include<iostream>
using namespace std;
int main(){
  int arr[] = {2, 6, 8, 9, 0, 6, 3, 7};
  int n = sizeof(arr) / 4;
  int sum = 0;
  for (int i = 0; i < n;i++){
    sum += arr[i];
  }
  cout << "Sum = " << sum;
}