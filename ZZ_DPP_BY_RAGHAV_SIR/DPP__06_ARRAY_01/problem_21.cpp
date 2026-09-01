/*
Q21. Check if an array is strictly sorted in non-increasing order.
 Return true if every element is less than or equal to the previous element, else false.

Constraints: 1 ≤ N ≤ 105, −109 ≤ arr[i] ≤ 109

Sample Input 1: {8, 5, 5, 2} ⇒ Output: true
Sample Input 2: {4, 2, 8} ⇒ Output: false

*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  vector<int> arr(n);
  cout << endl;
  cout << "Enter elements in array: ";
  for (int i = 0; i < n;i++){
    cin >> arr[i];
  }
  for(int e:arr)
    cout << e << " ";
  cout << endl;

  bool flag = true; // 8 5 5 2
  for (int i = 0; i < n-1;i++){
    if(arr[i]< arr[i+1]){
      flag = false;
      break;
    }
  }
  cout << flag; // 1 - true , 0 - false
}
