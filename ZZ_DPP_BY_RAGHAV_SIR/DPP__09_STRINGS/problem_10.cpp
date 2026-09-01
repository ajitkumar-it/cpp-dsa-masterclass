/*
Q10. Remove All Adjacent Duplicates In String.
    You are given a string s consisting of lowercase English letters.
    A duplicate removal consists of choosing two adjacent and equal letters and removing them.
    We repeatedly make duplicate removals on s until we no longer can. 
    Return the final string after all such duplicate removals have been made.


    Constraints:
         1 ≤ s.length ≤ 105
         s consists only of lowercase English letters.


   Sample Input 1: s = "abbaca"
   Sample Output 1: "ca"

   Explanation:
          For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal.
          The string then becomes "aaca". We then remove "aa", which leaves "ca".
          No more adjacent duplicates exist.


   Sample Input 2: s = "azxxzy"
   Sample Output 2: "ay"

   Explanation:
          Remove "xx" to get "azzy". Then remove "zz" to get "ay".


*/



#include<iostream>
#include<string>
using namespace std;
int main(){
       cout << "Enter a string with small characters only: ";
       string s; //azxxzy ---> ay
       getline(cin, s);

       int n = s.length();
       int i = 0, j = 1;
       while(j<n ){
              if(s[i]!=s[j]){
                     i++;
                     j++;
              }else{
                     s = s.substr(0, i) + s.substr(j + 1);
                     i = 0, j = 1;
                     n -= 2;
              }
       }

       cout << s;
}