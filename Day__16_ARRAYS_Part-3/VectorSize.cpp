#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr(8, -1);
  int n = arr.size();
  for (int i = 0; i < arr.size();i++){
    cout << arr[i] << " ";
  }
  cout << endl << n << endl;

  arr.push_back(5);
  for (int i = 0; i < arr.size();i++){
    cout << arr[i] << " ";
  }
  cout << endl << arr.size();
}