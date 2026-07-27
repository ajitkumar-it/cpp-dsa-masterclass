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
    // mx = max(mx,arr[i])
    if(mx < arr[i])
      mx = arr[i];
  }
  cout << "Maximum = " << mx;
}