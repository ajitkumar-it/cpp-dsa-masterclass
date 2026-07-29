#include<iostream>
using namespace std ;
void update ( int *p ){
  *p = *p * 2;
}
int main(){
  int x = 12;
  update (&x) ;
  cout << x ; // 24 --- B
}

// What will be the output of the above code?
// A.12  B.24  C.Address of x   D.Error