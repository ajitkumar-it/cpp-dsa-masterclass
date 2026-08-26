#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        // 2,4, 8,7,3,0
        //---index = 2

        int n = arr.size();
        int l=1,h=n-2;
        while(l<=h){
            int mid =l +(h-l)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) l=mid+1;
            else if(arr[mid]<arr[mid-1] && arr[mid] > arr[mid+1]) h=mid-1;
            else{
                return mid;
            }
        }
        return h;
        }
  
int main(){
  vector<int> arr = {3, 4, 5, 8, 3, 2, 1};
  cout << peakIndexInMountainArray(arr);
}