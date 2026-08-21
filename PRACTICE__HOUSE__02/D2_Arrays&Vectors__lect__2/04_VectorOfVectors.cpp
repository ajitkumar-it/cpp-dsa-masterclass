#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v1 = {3, 7, 0, 3}; // vector
  vector<int> v2 = {1, 5, 8, 9}; // vector
  vector<int> v3 = {4, 7, 8, 0}; // vector
  vector<int> v4 = {4, 17, 0}; // vector
  vector<int> v5 = {4, 0}; // vector


  vector<vector<int>> v;
  v.push_back(v1);
  v.push_back(v2);
  v.push_back(v4);
  v.push_back(v3);
  v.push_back(v5);

  for (int i = 0; i < v.size();i++){
    for (int j = 0; j < v[i].size();j++){
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}