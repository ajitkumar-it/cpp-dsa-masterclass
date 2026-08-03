#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int> y){ // VECTOR pass by value 
  y[2] = 99;
}

// void change(vector<int> &y){ // pass by reference
//   y[2] = 99;
// }
int main(){
  vector<int> v = {4, 3, 8, 2, 9, 7};
  cout << v[2] << " "; // 8
  change(v);
  cout << v[2]; // 8 
}