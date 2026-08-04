/*
Q20. Complex Array Rotation. Given an array of size N, first right-rotate the array by X

positions, and then left-rotate the resulting array by Y positions. Write an optimal O(N) approach.

Constraints: 1 ≤ N ≤ 105, 0 ≤ X, Y ≤ 109, −109 ≤ arr[i] ≤ 109
.
Sample Input: N = 5, arr = {1, 2, 3, 4, 5}, X = 2, Y = 1
Sample Output: {5, 1, 2, 3, 4}
Explanation: Right by 2 gives {4, 5, 1, 2, 3}. Then left by 1 gives {5, 1, 2, 3, 4}.
*/

#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& v,int i,int j){
  while(i<j){
    swap(v[i], v[j]);
    i++;
    j--;
  }
}
void rotate(vector<int>& v,int k){
  int n = v.size();
  reverse(v, 0, n-1);
  reverse(v, 0, k-1);
  reverse(v, k, n-1);
}
int main(){
  int n;
  cout << "Size of array: ";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter elements of array: ";
  for (int i = 0; i < n;i++){
    cin >> arr[i];
  }
  for(int el:arr)
    cout << el << " ";
  cout << endl;
  // ACTUAL WAR --------------------------
  int x, y;
  cout << "Enter right-rotate and y-rotate respectively: ";
  cin >> x >> y;
  int k = n + (x - y);
  k %= n;
  if(k<0)
    k *= -1;
  rotate(arr, k);
  for(int e:arr)
    cout << e << " ";
}
