#include<iostream>
using namespace std;
void modifyRef(int &x){ // alis method still work
  x = x + 10;
}
int main(){
  int a = 5;
  modifyRef(a); 
  cout << a; // 5 wrong // 15 correct -- alis method haa oh ok.
}