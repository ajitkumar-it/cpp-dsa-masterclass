#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n] = {}; // Default 0;
  cout << "Enter value in the array: ";
  //INPUT
  for (int i = 0; i <= n - 1;i++){
    cin >> arr[i];
  }

  //PRODUCT
  int prod = 1;
  for (int i = 0; i <= n - 1;i++){
    prod *= arr[i];
  }

  cout << "Product of array = " << prod << endl;
}