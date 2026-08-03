#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> v = {4, 3, 8, 2, 9};
  sort(v.begin(), v.end());
  cout << " Sorted ---> ";
  for(int ele:v)
    cout << ele << " ";

  reverse(v.begin(), v.end());
  cout << "Reversed ---> ";
  for(int ele:v)
    cout << ele << " ";

  // play with ---> Part of vector
  reverse(v.begin() + 1, v.end() - 1);
  cout << "Reversed a part---> ";
  for(int ele:v)
    cout << ele << " ";
}