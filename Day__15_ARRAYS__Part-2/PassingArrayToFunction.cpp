#include <iostream>
using namespace std;
void change(int y[])   // --------------------- no new array formed
{
  y[0] = 20;
  y[1] = 30;
  y[2] = 40;
}
int main()
{
  int x[] = {6, 1, 2};
  cout << x[0] << endl; // 6
  cout << x[1] << endl; // 1
  cout << x[2] << endl; // 2

  change(x); // --------> array is acting like pointers ,,,,, pass by reference

  cout << x[0] << endl; // 20
  cout << x[1] << endl; // 30
  cout << x[2] << endl; // 40
}