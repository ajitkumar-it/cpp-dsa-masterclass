#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printArr(vector<int>& arr){
  for(int e:arr)
    cout << e << " ";
}


int main(){
  vector<int> arr = {80, 74, 48, 63, 95, 57, 120};
  int limit = 150;

  int n = arr.size();
  sort(arr.begin(), arr.end());
  int i = 0, j = n - 1, boat = 0;
  while(i<j){
    int sum = arr[i] + arr[j];

    if(sum > limit){
      j--;
      boat += 1;
    }
    
    else{
      i++;
      j--;
      boat += 1;
    }
  }
  if(i==j)
    boat += 1;

  cout << "Boats required = " << boat;
}