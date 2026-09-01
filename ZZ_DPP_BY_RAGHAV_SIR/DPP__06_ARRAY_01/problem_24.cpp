/*
Q24. Move all 0s to the end of the array while maintaining the relative order of the non-zero elements.

   Constraints: 1 ≤ N ≤ 105, 0 ≤ arr[i] ≤ 109

   Sample Input: arr = {0, 1, 0, 3, 12} ⇒ Output: {1, 3, 12, 0, 0}

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
   cout << endl;
   
   int zeros = 0;
   for (int i = 0; i < n ;i++){
      if(arr[i]==0)
         zeros++;   
   }
   for(int i=0;i<=zeros;i++){
      for (int j = 0; j < n-1;j++){
         if(arr[j]==0 and arr[j+1] != 0)
            swap(arr[j], arr[j + 1]);
      }
   }
   cout << "Output: " << endl;
   for(int el:arr)
      cout << el << " ";
}