#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v = {4, 3, 8, 2, 9};
  for(int &ele:v){ // pass by value default --- so adding & to make reference
    if(ele%2==0)
      ele *= 2;
    else
      ele *= ele;
  }
  for(int ele:v)
    cout << ele << " ";
}