#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v(7);
  cout << v.size() << " " << v.capacity() << " ";// 7 7
  v.push_back(-9);
  cout << v.size() << " " << v.capacity() << " ";// 8 14

}