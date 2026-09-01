/*
Q18. Crazy Question
int main(){
  vector <int > v = {10 , 20 , 30};
  int& ref = v [0];
  // Force vector to grow and reallocate
  for( int i = 0; i < 100; i ++) {
    v. push_back (i) ;
  }
  ref = 999;
  cout << v [0] << endl ;
}
Output:

*/