#include<iostream>
using namespace std;
int main(){
  int marks[] = {74, 96, 91, 57, 62};
  cout << marks << endl; // address de rha hai
  cout << marks[2] << endl; //91
  cout << marks[0] << endl; //74
  cout << marks[4] << endl; //62
  cout << marks[1] << endl; //96

  marks[1] = 100;
  cout << marks[1] << endl;// 100

  
}