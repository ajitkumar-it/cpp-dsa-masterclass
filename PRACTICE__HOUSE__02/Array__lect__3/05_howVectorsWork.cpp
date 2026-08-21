#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v;
  v.push_back(5);
  cout << v.size() << " " << v.capacity() << endl;// 1 1
  v.push_back(6);
  cout << v.size() << " " << v.capacity() << endl;// 2 2
  v.push_back(7);
  cout << v.size() << " " << v.capacity() << endl;// 3 4
  v.push_back(8);
  cout << v.size() << " " << v.capacity() << endl;// 4 4
  v.push_back(9);
  cout << v.size() << " " << v.capacity() << endl;// 5 8
}