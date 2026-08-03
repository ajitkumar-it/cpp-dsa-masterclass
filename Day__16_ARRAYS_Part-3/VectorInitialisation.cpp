#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v = {4, 3, 8, 2, 9};
  cout << v.capacity() <<" "<< v.size()<< endl;
  cout << v[1];
}