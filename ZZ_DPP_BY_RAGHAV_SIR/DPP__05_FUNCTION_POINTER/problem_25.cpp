/*
Q25. Write a function reverseNumber(int n) that takes an integer,
     reverses its digits mathematically, and uses the return keyword 
     to give back the reversed integer to main().

     Sample — Input: 1234 ⇒ Output: 4321
*/
#include<iostream>
using namespace std;
int reverseNumber(int n){
  int rev = 0;
  while(n!=0){
    int ld = n % 10;
    rev *= 10;
    rev += ld;
    n /= 10;
  }
  return rev;
}
int main(){
  int n;
  cout << "Enter number: ";
  cin >> n;
  cout << "Input = " << n << endl;
  cout << "Reversed = " << reverseNumber(n) << endl;
}

