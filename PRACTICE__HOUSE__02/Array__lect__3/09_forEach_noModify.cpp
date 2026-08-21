#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v = {2, 3, 4, 5, 6};
  for(int ele:v){
    if(ele%2==0)
      ele *= 2;
    else
      ele *= ele;
  }
  for(int e:v)
    cout << e << " ";
}