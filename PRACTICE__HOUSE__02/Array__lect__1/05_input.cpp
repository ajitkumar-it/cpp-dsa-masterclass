#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter Size of THe Array: ";
  cin >> n;
  int arr[n];
  cout << "Enter values in array: ";
  for(int i = 0; i < n;i++){
    cin >> arr[i];
  }
  cout << "Your Array is : " << endl;
  for(int i = 0; i < n;i++){
    cout << arr[i] << " ";
  }
}