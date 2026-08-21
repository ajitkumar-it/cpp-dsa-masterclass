#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[] = {10, 20, 40, 70, 90, 100};
  int brr[] = {30, 50, 60, 80};
  int m = sizeof(arr) / 4, n = sizeof(brr) / 4;
  int crr[m + n];
  int i = 0, j = 0, k = 0;
  while(i<m and j<n){
    if(arr[i]<brr[j])
      crr[k++] = arr[i++];
    else
      crr[k++] = brr[j++];
  }
  while(i<m)
    crr[k++] = arr[i++];
  while(j<n)
    crr[k++] = brr[j++];
  for(int e:crr)
    cout << e << " ";
}