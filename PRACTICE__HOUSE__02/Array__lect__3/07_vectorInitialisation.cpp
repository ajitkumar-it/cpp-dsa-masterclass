#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v = {5, 7, 8, 9, 10};
  cout << v.capacity() << " " << v.size()<<endl;// 5 5
  cout << v[1] << endl; // 7
}