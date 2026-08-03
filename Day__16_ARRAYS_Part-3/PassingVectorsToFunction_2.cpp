#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// void change(vector<int> y){ // VECTOR pass by value default
  // y[2] = 99;
// }

void change(vector<int> &y){
  y[2] = 99;
}
int main(){
  vector<int> v = {4, 3, 8, 2, 9, 7};
  cout << v[2] << " "; // 8
  change(v);
  cout << v[2]; // 99
}