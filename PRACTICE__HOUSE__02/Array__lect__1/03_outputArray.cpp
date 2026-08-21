#include<iostream>
using namespace std;
int main(){
  int arr[] = {23, 56, 78, 98, 22, 56, 80, 89};
  int n = sizeof(arr) / 4;
  for (int i = 0; i < n;i++){
    cout << arr[i] << " ";
  }
}