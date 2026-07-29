/*
Q28. Create a mini banking application demonstrating Global Variables.
     Declare a global variable double balance = 0.0;.
     Write two functions deposit(double amount) and withdraw(doubleamount)
     that modify this global state. Print the final balance from main().

     Sample — deposit(500), withdraw(200) ⇒ Output: Balance: 300
*/

#include<iostream>
using namespace std;
double balance = 0.0;
void deposit(double amount){
     balance += amount;
}                              
void withdraw(double amount){
     if(balance>=amount)
       balance -= amount;
}
int main(){
     double am1, am2;
     cout << "Enter deposit and withraw amount: ";
     cin >> am1 >> am2;
     deposit(am1);
     withdraw(am2);
     cout << "Balance remain = " << balance;
}