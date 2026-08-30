#include<iostream>
#include<string>
using namespace std;
string reverseStr( string& str){
  int n = str.length();
  int i = 0, j = n - 1;
  while(i<j){
    swap(str[i], str[j]);
    i++;
    j--;
  }
  return str;
}
int main(){
  string s = "the sky is blue";
  int n = s.length();
  string ans = "";
  int i = 0, j = 0;
  while(j<n){
    if(s[j] !=' ')
      j++;
    else{
      int len = j - i;
      string subString = s.substr(i, len);
      ans += reverseStr(subString);
      i = j;
      while(s[i]==' '){
        i++;
        j++;
        ans += ' ';
      }
    }
  }
  int len = j - i;
  string subString = s.substr(i, len);
  ans += reverseStr(subString);
  i = j;
  cout << ans << endl;
}