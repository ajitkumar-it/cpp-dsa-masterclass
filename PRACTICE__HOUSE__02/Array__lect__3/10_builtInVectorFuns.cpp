#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> v = {1, 5, 9, 3, 8, 4, 0, 2};
  sort(v.begin(), v.end());
  for(int ele:v)
    cout << ele << " ";
  cout << endl;
  reverse(v.begin(), v.end());
  for(int ele:v)
    cout << ele << " ";
}
