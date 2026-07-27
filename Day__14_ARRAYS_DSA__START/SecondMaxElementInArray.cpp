#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  cout << "Enter element of array: ";
  //INPUT
  for (int i = 0; i <= n - 1;i++){
    cin >> arr[i];
  }

  // MAXIMUM FIND
  int mx = INT_MIN;
  for (int i = 0; i <= n - 1;i++){
    if(arr[i] > mx)
      mx = arr[i];
  }
  int smx = INT_MIN;
  for (int i = 0; i <= n - 1;i++){
    if(arr[i] > smx and arr[i] != mx)
      smx = arr[i];
  }
  cout << mx << " " << smx << endl;
}