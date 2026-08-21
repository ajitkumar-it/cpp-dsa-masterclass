#include <iostream>
using namespace std;
int main()
{
  int arr[] = {33, 99, 67, 88, 34, 76};
  int n = sizeof(arr) / 4;
  int mx = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > mx)
      mx = arr[i];
  }
  int smx = INT_MIN;
  /*
  for (int i = 0; i < n;i++){
    if(arr[i]>smx and arr[i]!=mx)
      smx = arr[i];
  }
  cout << mx << " and " << smx;
  */
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == mx)
      continue;
    if (arr[i] > smx)
    {
      smx = arr[i];
    }
  }
  cout << mx << " and " << smx;
}