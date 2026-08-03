#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> v = {10, 20, 30, 40, 50, 60, 70};
  int n = v.size();
  int i = 0, j = n - 1;
  while(i<j){
    // swap(v[i],v[j]);
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
  }
  for(int e:v)
    cout << e << " ";
}
