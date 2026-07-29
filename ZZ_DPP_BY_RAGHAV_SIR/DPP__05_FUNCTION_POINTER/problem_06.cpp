#include <iostream>
using namespace std;
int main(){
  int score = 40;
  int *ptr = &score;
  *ptr = 99;
  cout << score; // 99
}