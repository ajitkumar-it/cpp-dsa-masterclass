#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printArr(vector<int>& arr){
  for(int ele:arr)
    cout << ele << " ";
}


int main(){
  vector<int> a = {1, 2, 4, 4, 8, 10}, b = {2, 3, 4, 6, 8, 9, 10};
  int m = a.size(), n = b.size();
  int i = 0, j = 0, k = 0;
  vector<int> ans;

  while(i<m && j<n){
    if(a[i] == b[j]){
      ans.push_back(a[i]);
      i++;
      j++;
      
    }
    else if(a[i]<b[j]){
      
      ans.push_back(a[i]);
      i++;
    }
    else{
      ans.push_back(b[j]);
      j++;
    }
  }
  while(i<m){
    ans.push_back(a[i]);
    i++;
  }
  while(j<n){
    ans.push_back(b[j]);
    j++;
  }

  printArr(ans);
}