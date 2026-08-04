/*
Q25. Check if an array is a Palindrome. An array is a palindrome if it reads the same forward and backward.

    Constraints: 1 ≤ N ≤ 105, −109 ≤ arr[i] ≤ 109.

    Sample Input 1: {1, 2, 3, 2, 1} ⇒ Output: Palindrome
    Sample Input 2: {1, 2, 3, 4} ⇒ Output: Not Palindrome

*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout <<"Enter elements in the array: ";
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    bool palindrome = true;
    int i = 0, j = n - 1;
    while(i<j){
        if(arr[i]!=arr[j]){
            palindrome = false;
            break;
        }
        i++;
        j--;
    }
    if(palindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}