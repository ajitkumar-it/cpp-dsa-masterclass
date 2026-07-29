/*
Q21. Write a program to calculate the hypotenuse of a right-angled triangle given its base and perpendicular.
     Write a function that accepts these two values and uses the inbuilt sqrt() library function to return the hypotenuse.

     Sample — Input: 3 4 ⇒ Output: 5
*/
#include<iostream>
#include<cmath>
using namespace std;
int getHypotenuse(int b,int p){
     return sqrt(b * b + p * p);
}
int main(){
     int b, p;
     cout << "Enter base and perpendicular: ";
     cin >> b >> p;
     cout << "Hypotenuse = " << getHypotenuse(b, p) << endl;
}