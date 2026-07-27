#include<iostream>
using namespace std;
int main(){
  int marks[] = {74, 96, 91, 57, 62, 90, 87, 66, 50};
  
  cout << size(marks) << endl; // 9
  cout << sizeof(marks) << endl; // 36 = 9 * 4 bytes

  cout << "Size of array = " << sizeof(marks) / sizeof(int) << endl;
  cout << "Size of array = " << sizeof(marks) / 4 << endl;

  int x = 3;
  cout << sizeof(x) << endl; // 4
}