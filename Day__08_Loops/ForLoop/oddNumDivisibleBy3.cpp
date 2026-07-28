#include<iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the last number: ";
  cin >> n;
  for (int i = 1; i <= n; i+=2){
    if (i % 3 == 0)
      cout << i << " ";
  }
}