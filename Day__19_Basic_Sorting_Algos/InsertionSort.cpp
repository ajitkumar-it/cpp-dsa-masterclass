#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int> &arr){
  for(int ele:arr)
    cout << ele << " ";
}

int main(){
  vector<int> v = {4, 1, 7, 3, 9, 2,0, 8};
  int n = v.size();
  for (int i = 1; i < n - 1;i++){
    int j = i;
    while(j>=1 && v[j]<v[j-1]){
      swap(v[j], v[j - 1]);
      j--;
    }
  }
  printArr(v);
}