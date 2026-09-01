/*
Q11. Longest Common Prefix. Write a function to find the 
     longest common prefix string amongst an array of strings.
     If there is no common prefix, return an empty string "".

     Constraints:
            1 ≤ strs.length ≤ 104
            0 ≤ strs[i].length ≤ 100
          strs[i] consists of only lowercase English letters.

    Sample Input: strs = ["flower", "flow", "flight"]
    Sample Output: "fl"

*/



#include<iostream>
#include<string>
using namespace std;
int main(){
  string str[] = { "flower", "flow", "flight" };
  int n = sizeof(str)/sizeof(string); // 3
  //cout << n;

  string ans = str[0];

  for (int i = 1; i < n;i++){
    int j = 0;
    while(j<ans.length() && j<str[i].length()&& ans[j]==str[i][j]){
      j++;
    }
    ans = ans.substr(0, j);
    if(ans=="")
      break;
  }

  cout << ans;
  
}