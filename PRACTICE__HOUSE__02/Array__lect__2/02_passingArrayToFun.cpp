#include<iostream>
using namespace std;
void change(int brr[]){
  brr[1] = 100;
}
int main(){
  int arr[] = {33, 78, 9, 8, 45, 12, 11};
  cout << arr[1] << endl;
  change(arr);
  cout << arr[1];
}