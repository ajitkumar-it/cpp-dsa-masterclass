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
    for (int j = 0; j < n - 1 - i; j++) { // last ke 1 - 1 element km kre
      if (v[j] > v[j + 1])
        swap(v[j], v[j + 1]);
    }
  }
  cout << endl;
}

int main(){
  vector<int> v = {5, 4, 3, 2, 1};
  printArr(v);
  bubbleSort(v);
  printArr(v);
}