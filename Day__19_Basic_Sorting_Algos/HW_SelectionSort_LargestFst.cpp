#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int> arr){
  for(int ele:arr)
    cout << ele << " ";
}


int main(){
  vector<int> arr = {3, 1, 2, 5, 4, 0,9,7,8,9};
  int n = arr.size();
  for (int i = n - 1; i > 0;i--){
    int mx = arr[i], mxIdx = i;
    for (int j = 0; j < i;j++){
      if(arr[j]>mx){
        mxIdx = j;
        mx = arr[j];
      }
    }
    swap(arr[i], arr[mxIdx]);
  }

  printArr(arr);
}