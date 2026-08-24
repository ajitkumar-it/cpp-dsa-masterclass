#include <iostream>
#include <vector>
using namespace std;
void printArr(vector<int> &arr){
  int n = arr.size();
  for (int ele : arr)
  {
    cout << ele << " ";
  }
}

void bubbleSort(vector<int> &v){
  int n = v.size();
  for (int i = 0; i < n - 1; i++)  { // n-1 times round
    bool isSwap = false;
    for (int j = 0; j < n - 1 - i; j++) { // last ke 1 - 1 element km kre
      if (v[j] > v[j + 1]){
        swap(v[j], v[j + 1]);
        isSwap = true;
      }
    }
    if(isSwap==false)
      break;
  }
    
}

int main(){
  vector<int> v = {1,2,3,4,5};
  printArr(v);
  bubbleSort(v);
  cout << endl;
  printArr(v);
}