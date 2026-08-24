#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int>& arr){
  int n = arr.size();
  for(int ele:arr){
    cout << ele << " ";
  }
}


int main(){
  vector<int> v = {5, 4, 3, 2, 1};
  int n = v.size();
  for (int i = 0; i < n - 1;i++){
    int sm = v[i], smIdx = i;
    for (int j = i; j < n;j++){
      if(v[j]<sm){
        smIdx = j;
        sm = v[j];
      }
    }
    swap(v[i], v[smIdx]);
  }

  printArr(v);
}