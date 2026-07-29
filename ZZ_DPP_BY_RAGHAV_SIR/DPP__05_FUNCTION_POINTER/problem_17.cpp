/*
Q17. Write a program containing a function findMaximum(int a, int b, int c)
     that uses the inbuilt max() function to return the largest of three numbers.
     Call this function in main().

     Sample — Input: 12 45 9 ⇒ Output: 45
*/
#include<iostream>
using namespace std;
int findMaximum(int a, int b, int c){
     return (max(c, max(a, b)));
}
int main(){
     cout << findMaximum(12, 45, 9) << endl;
}