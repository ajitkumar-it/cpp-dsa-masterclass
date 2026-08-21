#include<iostream>
using namespace std;
int main(){
  int arr[][4] = {{1, 2, 13, 4}, {5, 6, 37, 8}, {9, 10, 101, 12}};
  int brr[3];
  for (int i = 0; i < 3;i++){
    int mxEle = INT_MIN;
    for (int j = 0; j < 4;j++){
      if(arr[i][j]>mxEle)
        mxEle = arr[i][j];
    }
    brr[i] = mxEle;
  }
  int minEle = INT_MAX;

  for(int e:brr){
    cout << e << " ";
    if (e<minEle)
      minEle = e;
  }
  cout <<endl<< minEle << endl;
}