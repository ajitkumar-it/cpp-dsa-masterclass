#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr = {1, 3, 5, 6, 7, 9};
  int target = 4; //2
  int n = arr.size();
  if(n==1){
    cout << 0;
    return 0;}
  if(arr[n-1] < target){
    cout << n;
    return 0;
  }
  

  int l = 0, h = n - 1 ;
  
  while(l<=h){
    int mid = l + (h - l) / 2;
    if(arr[mid]>target)
      h = mid - 1;
    else if(arr[mid] < target)
      l = mid + 1;
    else{
      cout << mid;
      return 0;
    }
  }
  cout << l;
  return 0;
}