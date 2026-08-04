/*
Q28. Absolute Difference of Sums. Calculate the sum of elements 
     at even indices and the sum of elements at odd indices in the array.
     Output the absolute difference between these two sums.

     Constraints: 1 ≤ N ≤ 105, −104 ≤ arr[i] ≤ 104

     Sample Input: arr = {10, 5, 20, 15} ⇒ Output: 10

     Explanation: Even indices sum = 10 + 20 = 30. Odd indices sum = 5 + 15 = 20.
                   Difference = |30 − 20| = 10.


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
     cout << "Enter element in the array:";
     for (int i = 0; i < n;i++){
          cin >> arr[i];
     }
     int sumEv = 0,sumOd = 0;
     for (int i = 0; i < n;i++){
          if(i%2==0)
               sumEv += arr[i];
          else
               sumOd += arr[i];
     }
     cout << abs(sumEv - sumOd);
}