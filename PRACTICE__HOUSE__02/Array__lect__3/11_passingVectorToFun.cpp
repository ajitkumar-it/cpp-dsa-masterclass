#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> arr){
  arr[2] = 20;
}
int main(){
  vector<int> v = {4, 5, 6, 7, 8};
  cout << v[2] << endl; // 6
  change(v);
  cout << v[2] << endl; // 6 
}