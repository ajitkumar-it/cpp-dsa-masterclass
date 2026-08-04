/*

Q19. Find the Third Maximum element in a given array.
       Constraints: 3 ≤ N ≤ 105 , −109 ≤ arr[i] ≤ 109.
      You are not allowed to sort the array.

      Sample Input: N = 5, arr = {4, 1, 9, 7, 2} ⇒ Sample Output: 4
      Explanation: The max is 9, second max is 7, third max is 4.

*/

#include<iostream>
using namespace std;
int main(){
      int n;
      cout << "Enter the size of the array: ";
      cin >> n;
      int arr[n] = {};
      cout<<"Enter the elements in the array: ";
      for (int i = 0; i < n;i++){
            cin >> arr[i];
      }
      // PRINT ARRAY
      for(int ele:arr)
            cout << ele << " ";
      cout << endl;

      // MAX
      int mx = INT_MIN;
      for(int ele:arr) {
            if(ele > mx)
                  mx = ele;
      }
      //smx
      int smx = INT_MIN;
      for(int ele:arr){
            if(ele > smx and ele != mx)
                  smx = ele;
      }
      // thirdmx
      int trdmx = INT_MIN;
      for(int ele:arr){
            if(ele>trdmx and (ele != smx and ele != mx)){
                  trdmx = ele;
            }
      }

      cout << "max = " << mx << " smx = " << smx << " Third max = " << trdmx << endl;
}