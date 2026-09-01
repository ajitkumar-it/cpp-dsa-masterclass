/*
Q13. Absolute Frequency Difference of Characters.
     Given two strings s1 and s2 consisting of lowercase English letters,
     generate a new string based on the characters that differ in frequency between the two strings.
     Specifically, calculate the absolute difference in the frequency of each character.
     If a character appears x times in s1 and y times in s2, it should appear |x − y| times in the output string.
     The final string must be printed in strictly alphabetical sorted order.


     Constraints:
            1 ≤ s1.length,s2.length ≤ 105
            s1 and s2 consist of lowercase English letters.


    Sample Input 1: s1 = "hello", s2 = "world"
    Sample Output 1: "dehlrw"

    Explanation:
          ’l’ is present 2 times in s1 and 1 time in s2, difference is 1. ’h’ and ’e’ are in s1 but not s2,
          difference is 1 each. ’w’, ’r’, ’d’ are in s2 but not s1, difference is 1 each.


    Sample Input 2: s1 = "abc", s2 = "abc"
    Sample Output 2: ""

    Explanation:
          All characters have the same frequency in both strings, so the difference is 0 for all characters.


    Sample Input 3: s1 = "aab", s2 = "bcc"
    Sample Output 3: "aabcc"

    Explanation:
          ’a’ appears 2 times in s1 and 0 times in s2 (diff = 2). ’b’ appears 1 time in both strings (diff = 0). 
          ’c’ appears 0 times in s1 and 2 times in s2 (diff = 2). The output string combines these alphabetically.

        

*/



#include <iostream>
#include <string>
using namespace std;

int main() {

    string s1 = "aab";
    string s2 = "bcc";

    string ans = "";

    int i = 0;

    while (i < s1.size()) {

        int j = 0;
        bool found = false;

        while (j < s2.size()) {

            if (s1[i] == s2[j]) {

                s1 = s1.substr(0, i) + s1.substr(i + 1);
                s2 = s2.substr(0, j) + s2.substr(j + 1);

                found = true;
                break;
            }

            j++;
        }

        if (!found) {
            ans += s1[i];
            i++;
        }
    }

    ans += s1.substr(i);
    ans += s2;

    cout << ans;

    return 0;
}