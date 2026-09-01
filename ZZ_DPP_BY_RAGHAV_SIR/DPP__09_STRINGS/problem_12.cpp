/*
Q12. Check String Rotation. Given two strings s and goal,
     return true if and only if s can become goal after some number of shifts on s.
     A shift on s consists of moving the leftmost character of s to the rightmost position.


     Constraints:
             1 ≤ s.length, goal.length ≤ 105
             s and goal consist of lowercase English letters.

     Sample Input: s = "abcde", goal = "cdeab"
     Sample Output: true

     Explanation:
           Shifting s ("abcde") one position to the left gives "bcdea".
           Shifting it one more position to the left gives "cdeab", which matches goal.




*/



#include<iostream>
#include<string>
using namespace std;
bool isOkay(string s,string goal){
      if(s==goal)
        return true;
      if(s.length() != goal.length())
        return false;

      string temp = s + s;
      int i = 0, j = 0;
      while(i<temp.length()){
            if(temp[i]==goal[j]){
                  i++;
                  j++;     
                  
                  if(j==goal.length())
                        return true;
            }
            else{ // mismatch hone par,,,,,next starting points
                  i = i - j + 1;
                  j = 0;
            }

      }
      return false;
}

int main(){
      string s = "abcde", goal = "cdeab";
      cout << isOkay(s, goal);
}