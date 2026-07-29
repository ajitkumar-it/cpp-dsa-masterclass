#include<iostream>
using namespace std;
void display(int a){
  cout << " Int : " << a << endl;
}
void display( double a){ 
  cout << " Double : " << a << endl ; 
}

int main(){
  display (7); // Int : 7
  display (7.5);// Double : 7.5
}