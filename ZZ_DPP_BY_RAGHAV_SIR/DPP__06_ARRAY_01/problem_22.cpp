/*
Q22. Given an array and a target integer T, count how many elements in the array are strictly less than T.

Constraints: 1 ≤ N ≤ 105, −109 ≤ arr[i], T ≤ 109

Sample Input: arr = {5, 2, 8, 1, 9}, T = 6 
⇒ Output: 3 (Elements 5, 2, 1)

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  vector<int> v(n);
  cout << endl << "Enter elements in the array: ";
  for (int i = 0; i < n;i++){
    cin >> v[i];
  }
  cout << endl;
  for(int e:v)
    cout << e << " ";
  cout << endl;
  int target;
  cout << "Your target element: ";
  cin >> target;
  int count = 0;
  for (int i = 0; i < n;i++){
    if(v[i]<target)
      count++;
  }
  cout << count;
}