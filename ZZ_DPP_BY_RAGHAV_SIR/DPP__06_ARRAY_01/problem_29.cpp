/*
Q29. Minimum Absolute Difference. Find the minimum absolute difference between
      any two adjacent elements in the given array.

      Constraints: 2 ≤ N ≤ 105, −109 ≤ arr[i] ≤ 109

      Sample Input: arr = {10, 20, 15, 30, 28} ⇒ Output: 2

      Explanation: Differences: |10 − 20| = 10, |20 − 15| = 5, |15 − 30| = 15, |30 − 28| = 2.
                   The minimum is 2.



*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
      int n;
      cout << "Enter size of the array: ";
      cin >> n;
      vector<int> arr(n);
      cout << "Enter element in the array: ";
      for (int i = 0; i < n;i++){
            cin >> arr[i];
      }
      int min = 300;
      for (int i = 0; i < n-1;i++){
            if(abs(arr[i]-arr[i+1]) < min)
                  min = abs(arr[i] - arr[i + 1]);
      }
      cout << "MINIMUM = " << min;
}