#include <iostream>
using namespace std;
int main(){
  // LINEAR SEARCHING
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n] = {}; // Default 0;
  cout << "Enter value in the array: ";
  // INPUT
  for (int i = 0; i <= n - 1; i++)  {
    cin >> arr[i];
  }

  int targetEl;
  cout << "Enter your target search: ";
  cin >> targetEl;
  bool found = false;
  for (int i = 0; i <= n - 1;i++){
    if(arr[i]==targetEl){
      found = true;
      break;
    }
  }
  if(found)
    cout << targetEl << " Found in the array";
    else
      cout << "Not found";
}