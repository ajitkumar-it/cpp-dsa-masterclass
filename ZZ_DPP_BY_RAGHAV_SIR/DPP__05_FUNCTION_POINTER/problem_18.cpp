/*
Q18. Write a function printEven(int start, int end) 
     that prints all even numbers between start and end (inclusive).
     Call it from main().

     Sample — Input: 10 15 ⇒ Output: 10 12 14

*/
#include<iostream>
using namespace std;
void printEven(int start,int end){
     for (int i = start; i <= end;i++){
          if(i%2==0)
               cout << i << " ";
     }
}
int main(){
     printEven(10, 15);
}