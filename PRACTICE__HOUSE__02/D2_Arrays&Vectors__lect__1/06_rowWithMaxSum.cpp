#include<iostream>
using namespace std;
int main(){
  int arr[][4] = {{200, 40, 6, 8}, {88, 57, 78, 12}, {12, 45, 220, 98}};
  int row = -1, mxSum = INT_MIN;
  for (int i = 0; i < 3;i++){
    int sum = 0;
    for (int j = 0; j < 4;j++){
      sum += arr[i][j];
    }
    if(sum>mxSum){
      mxSum = sum;
      row = i;
    }
  }
  cout << "Row with maximum sum = " << row;
}