#include<iostream>
#include<vector>
using namespace std;

int mySqrt(int& n) {
        int l=1, h=n;
        while(l<=h){ // log(n)
            int mid = l +(h-l)/2;
            if(mid > n/mid) h = mid-1; //mid*mid > n ----> h = mid -1;
            else if(mid < n/mid) l = mid +1;
            else{
                return mid;
            }
        }
        return h;
        
    }

int main(){
  int n = 11;
  cout << mySqrt(n);
}