/*
Q26. Write a boolean function isPrime(int n) that checks if a number is prime.
     Then, in main(), use this function in a loop 
     to print all prime numbers between 1 and a user-provided integer N.

     Sample — Input: 10 ⇒ Output: 2 3 5 7

*/

#include<iostream>
using namespace std;
bool isPrime(int n){
     if(n<2){
          return false;
     }
     for (int i = 2; i < n;i++){
          if(n%i==0)
               return false;          
     }
     return true;
}
int main(){
     int n;
     cout << "Enter a number: ";
     cin >> n;
     for (int i = 2; i <= n;i++){
          if(isPrime(i))
               cout << i <<" ";
     }
}

