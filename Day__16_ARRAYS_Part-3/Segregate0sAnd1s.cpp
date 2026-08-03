#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void segregate0sand1s(vector<int> &arr){
  int i = 0, j = arr.size() - 1;
  while(i<j){
    if(arr[i]==0)
      i++;
    else if(arr[j]==1)
      j--;
    else if(arr[i]==1 and arr[j]==0){
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }
}

int main(){
  vector<int> v = {0, 1, 1, 0, 1, 0, 0, 1};
  segregate0sand1s(v);
  for(int e:v)
    cout << e << " ,";
}