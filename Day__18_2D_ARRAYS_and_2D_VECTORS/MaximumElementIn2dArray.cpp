#include<iostream>
using namespace std;
int main(){
  int arr[][4] = {{5, 8, 1, 2}, {9, 9, 4, 4}, {7, 0, 3, 5}};
  int mxEle = INT_MIN;
  for (int i = 0; i < 3;i++){
    for (int j = 0; j < 4;j++){
      if(arr[i][j]>mxEle)
        mxEle = arr[i][j];
    }
  }
  cout << "Maximum Element = " << mxEle;
}