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
  vector<int> v = {9, -2, 0, 0, -4, 6, 0, 7, 0};
  int n = v.size();
  for (int i = 0; i < n - 1;i++){
    for (int j = 0; j < n - 1-i;j++){
      if(v[j]==0){
        swap(v[j], v[j + 1]);
      }
    }
  }

  printArr(v);
}