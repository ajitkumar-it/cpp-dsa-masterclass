#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[][4] = {{1, 8, 9, 6}, {99, 56, 72, 12}, {99, 90, 123, 67}};
  int mx = INT_MIN;
  for (int i = 0; i < 3;i++){
    for (int j = 0; j < 4;j++){
      if(arr[i][j]>mx)
        mx = arr[i][j];
    }
  }
  cout << "Maximum = " << mx << endl;
}