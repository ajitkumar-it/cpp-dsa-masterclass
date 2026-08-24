#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr = {1, 2, 3, 4, 5, 7, 8};
  int n = arr.size();
  bool sorted = true;
  for (int i = 0; i < n - 1;i++){
    if(arr[i]>arr[i+1]){
      sorted = false;
      break;
    }
  }
  if(sorted)
    cout << "sorted";
  else
    cout << "not sorted";
}