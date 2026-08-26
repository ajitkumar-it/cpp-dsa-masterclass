#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> arr = {-750, -474, -436, -272, -124, -25, 5, 87, 191, 193, 579};
  int target = 5;

  int n = arr.size();
  int l = 0, h = n - 1;
  while(l<=h){
    int mid = l + (h - l) / 2;
    if(arr[mid] > target)
      h = mid - 1;
    else if(arr[mid] < target)
      l = mid + 1;
  else{
    cout << "Found at " << mid;
    break;
  }
  }


}