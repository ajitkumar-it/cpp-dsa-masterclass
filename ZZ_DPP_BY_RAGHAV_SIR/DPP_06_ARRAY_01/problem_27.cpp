/*
Q27. Difference Array. Given an array, create a new array where 
    the value at index i is the absolute difference between arr[i] and arr[i+1].
    For the last element, it should be the absolute difference between the last and the first element.


    Constraints: 2 ≤ N ≤ 105, −109 ≤ arr[i] ≤ 109

    Sample Input: arr = {5, 9, 2} ⇒ Output: {4, 7, 3}
    Explanation: |5 − 9| = 4, |9 − 2| = 7, |2 − 5| = 3.

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    vector<int> v;
    for (int i = 0; i < n-1;i++){
        v.push_back(abs(arr[i] - arr[i+1]));
    }
    v.push_back(abs(arr[0] - arr[n - 1]));
    cout << endl;
    for(int e:v)
        cout << e << " ";
}