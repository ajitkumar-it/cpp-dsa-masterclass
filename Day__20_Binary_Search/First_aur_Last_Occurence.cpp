#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr = {-4, -3, -3, 1, 1, 1, 1, 1, 1, 2, 4, 4, 8, 9};
  int target = 1;

  int n = arr.size();
  vector<int> ans(2,-1);
  int l = 0, h = n - 1;
  
  //1ST OCCURANCE
  while(l<=h){ // log(n)
    int mid = l + (h - l) / 2;
    if(arr[mid]==target){
      ans[0] = mid;
      h = mid - l;
    }
    else if(arr[mid]>target)
      h = mid - 1;
    else {
      l = mid + 1;
    }
  }
  //cout << ans[0];


  // LAST OCCURANCE
  l = 0, h = n - 1;
  while(l<=h){
    int mid = l + (h - l) / 2;
    if(arr[mid]>target)
      h = mid - 1;
    else if(arr[mid] < target)
      l = mid + 1;
    else{
      ans[1] = mid;
      l = mid + 1;
    }
  }

  for(int ele:ans)
    cout << ele << " ";
}