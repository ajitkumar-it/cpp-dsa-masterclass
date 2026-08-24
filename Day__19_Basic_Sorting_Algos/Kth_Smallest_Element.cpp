#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int>& arr){
  for(int ele:arr)
    cout << ele<<" ";
}


int main(){
  vector<int> v = {93, 17, 4, 64, 46, 18, 3, 61};
  int n = v.size();
  int k = 3;
  for (int i = 0; i < k;i++){
    int sm = v[i], smIndx = i;
    for (int j = i; j < n;j++){
      if(v[j]<sm){
        sm = v[j];
        smIndx = j;
      }
    }
    swap(v[i], v[smIndx]);
  }

  printArr(v);
}