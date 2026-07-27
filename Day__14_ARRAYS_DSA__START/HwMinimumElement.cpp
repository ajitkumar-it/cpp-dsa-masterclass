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

  // Minimum FIND
  int minn = INT_MAX;
  for (int i = 0; i <= n - 1;i++){
    if(minn > arr[i])
      minn = arr[i];
  }
  cout << "Minimum = " << minn;
}