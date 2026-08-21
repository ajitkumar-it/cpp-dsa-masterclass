#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> v = {2, 3, 5, 8, 9};
  int n = v.size();
  int i = 0, j = n - 1;
  while(i<j){
    swap(v[i], v[j]);
    i++;
    j--;
  }
  for(int e:v)
    cout << e << " ";
}

/*
swapping
int temp = v[i];
v[i]=v[j];
v[j]=temp;
*/