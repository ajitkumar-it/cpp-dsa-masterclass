#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printArr(vector<int>& arr){
  for(int e:arr)
    cout << e << " ";
}

int main(){
  vector<int> a = {1, 2, 4, 4, 8, 10}, b = {2, 3, 4, 6, 8, 9, 10};
  int m = a.size(), n = b.size();
  int i = 0,  j = 0;
  vector<int> ans;
  while(i<m && j<n){
    if(a[i]<b[j]){
      i++;}
    else if(a[i]>b[j]){
      j++;}
    else{
      ans.push_back(a[i]);
      i++;
      j++;
      
    }  
  }

  printArr(ans);
}