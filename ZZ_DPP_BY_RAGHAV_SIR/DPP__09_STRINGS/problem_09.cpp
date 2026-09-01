/*
Q9. Defanging an IP Address. Given a valid (IPv4) IP address as a string, return a
    defanged version of that IP address. A defanged IP address replaces every period "." with "[.]".

 Solve it in-place or by building a new string in O(N) time.

 Constraints:
    7 ≤ address.length ≤ 15
    address is a valid IPv4 address.

    Sample Input: address = "1.1.1.1"
    Sample Output:          "1[.]1[.]1[.]1"



*/



#include<iostream>
#include<string>
using namespace std;
int main(){
    string address = "1.1.1.1";
    int n = address.size();
    
    string ans = "";
    for (int i = 0; i < n;i++){
        if(address[i]=='.')
            ans += "[.]";
        else{
            ans += address[i];
        }
    }
    cout << ans;
    
    
}