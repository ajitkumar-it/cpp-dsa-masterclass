/*
Q23. Write a function updateValues(int *a, int *b).
     The function should update the value of a to the sum of a and b,
     and update the value of b to the absolute difference of their original values. 
     (Hint: Store actual values in temp variables first!)

     Sample — Input: a = 4, b = 5 ⇒ Output after function call: a = 9, b = 1

*/
#include<iostream>
#include<cmath>
using namespace std;
void updateValues(int* a,int* b){
     int temp = *a;
     *a = *a + *b;
     *b = abs(temp - *b);
}
int main(){
     int a, b;
     cout<<"Enter two numbers: ";
     cin >> a >> b;
     cout << "a = " << a << " b = " << b << endl;
     updateValues(&a, &b);
     cout << "a = " << a << " b = " << b << endl;
}