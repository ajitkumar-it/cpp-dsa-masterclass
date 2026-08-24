#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int>& arr){
  for(int e:arr)
    cout << e << " ";
}


int main(){
  vector<int> arr = {6, 8, 14, 19, 23, 31, 34};
  int target = 40;
  vector<int> ans(2,0);

  int n = arr.size();
  int i = 0, j = n-1;
  while(i<j){
    if((arr[i]+arr[j]) > target)
      j--;
    else if((arr[i]+arr[j]) < target)
      i++;
    else{
      ans[0] = i + 1;
      ans[1] = j + 1;
      break;
    }
  }

  printArr(ans);
}