#include<iostream>
using namespace std;
int main(){
  int arr[] = {5, 9, 1, 7, 2};
  int n = sizeof(arr) / 4;
  int prod = 1;
  for (int i = 0; i < n;i++){
    prod *= arr[i];
  }
  cout << "Product = " << prod;
}