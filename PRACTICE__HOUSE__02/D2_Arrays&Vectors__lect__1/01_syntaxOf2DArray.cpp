#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[][4] = {{1, 2, 3, 4}, {9, 8, 7, 6}, {5, 9, 2, 6}};
  for (int i = 0; i < 3;i++){
    for (int j = 0; j < 4;j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}