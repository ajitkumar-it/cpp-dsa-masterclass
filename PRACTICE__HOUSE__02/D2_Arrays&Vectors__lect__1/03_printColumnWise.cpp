#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
  for (int j = 0; j < 4;j++){
    for (int i= 0; i < 2;i++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}