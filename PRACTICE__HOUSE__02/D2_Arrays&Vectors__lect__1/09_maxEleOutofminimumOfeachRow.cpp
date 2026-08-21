#include<iostream>
using namespace std;
int main(){
  int arr[][4] = {{9, 4, 8, 4}, {6, 1, 1, 51}, {2, 2, 3, 6}};
  int minRes[4];
  for (int j = 0; j < 4;j++){
    int mnEl = INT_MAX;
    for (int i = 0; i < 3;i++){
      if(arr[i][j]<mnEl)
        mnEl = arr[i][j];
    }
    minRes[j] = mnEl;
  }
  int mxEl = INT_MIN;
  for(int e:minRes){
    cout << e << " ";
    if(e>mxEl)
      mxEl = e;
  }
  cout << endl
       << "Maximum Element out of minimum in each row = " << mxEl << endl;
}