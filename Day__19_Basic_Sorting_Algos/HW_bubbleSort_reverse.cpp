#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int>& arr){
  int n = arr.size();
  for(int ele:arr)
    cout << ele << " ";
}

void sortArrInRev(vector<int>& v){
  int n = v.size();
  for (int i = 0; i < n - 1;i++){
    bool isSwap = false;
    for (int j = 0; j < n - 1 - i;j++){
      if(v[j]<v[j+1]){
        swap(v[j], v[j + 1]);
        isSwap = true;
      }
    }
    if(isSwap == false)
      break;
  }
}

int main(){
  vector<int> v = {5,4,3,2,1};
  printArr(v);
  cout << endl;
  sortArrInRev(v);
  printArr(v);
}