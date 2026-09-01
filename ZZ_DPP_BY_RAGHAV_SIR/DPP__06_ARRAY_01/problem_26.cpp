/*
Q26. Count the number of Even and Odd numbers in a given array.
      
     Constraints: 1 ≤ N ≤ 105, 0 ≤ arr[i] ≤ 109

     Sample Input: arr = {1, 2, 3, 4, 5, 8} ⇒ Output: Even: 3, Odd: 3

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cout << "Enter size of the array: ";
     cin >> n;
     vector<int> arr(n);
     cout << "Enter elements in the array: ";
     for (int i = 0; i < n;i++){
          cin >> arr[i];
     }
     int even = 0, odd = 0;
     for (int i = 0; i < n;i++){
          if(arr[i]%2==0)
               even++;
          else
               odd++;
     }
     cout << "Even = " << even << " Odd = " << odd;
}