#include <bits/stdc++.h>
using namespace std;

void segregate(vector<int>&arr){
    int n=arr.size();
    int low=0;
    int high=n-1;

   while(low<high){
    if(arr[low]%2!=0 && arr[high]%2==0){
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
        else if (arr[low]%2==0){
            low++;
        }
        else{
            high--;
        }
   }
}


int main() {
    vector<int> arr = {7,8,3,6,4,9,1,5};
    segregate(arr);
    for (int x : arr)
        cout << x << " ";
    return 0;
}