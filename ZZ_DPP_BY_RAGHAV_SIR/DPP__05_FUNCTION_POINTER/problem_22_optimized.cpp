/*
Q22. Write a function sumFirstAndLast(int n) that extracts the first and the last digit
     of a given positive integer and returns their sum.

     Sample — Input: 4529 ⇒ Output: 13 (Since 4 + 9 = 13)
*/

#include<iostream>
using namespace std;
int sumFirstAndLast(int n){
  int last = n % 10;
  int first = n;
  while(first>=10){
    first /= 10;
  }
  return first + last;
}
int main(){
     int n;
     cout << "Enter number: ";
     cin >> n;
     cout << "Sum of first and last digit = " << sumFirstAndLast(n) << endl;
}