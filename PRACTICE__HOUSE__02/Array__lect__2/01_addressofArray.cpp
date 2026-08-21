#include<iostream>
using namespace std;
int main(){
  int arr[] = {22, 67, 9, 0, 8, 56, 45};
  cout << arr << endl;    // 0xd051ff660 ------ same
  cout << &arr[0] << endl;// 0xd051ff660 ------- same
  cout << &arr[1] << endl;// 0xd051ff664 ------ + 4
  cout << &arr[2] << endl;// 0xd051ff668 -------- + 4
}