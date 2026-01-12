#include <bits/stdc++.h>
using namespace std;

vector<int> findMinMax(vector<int>& arr) {
    int n = arr.size();
    int mini = INT_MAX, maxi = INT_MIN;
    
    for (int i = 0; i < n; i++) { 
        if (arr[i] < mini) mini = arr[i];
        if (arr[i] > maxi) maxi = arr[i];
    }
    
    return {mini, maxi};
}

int main() {
    vector<int> arr = {3, 5, 4, 1, 9};
    vector<int> result = findMinMax(arr);
    cout << "min :"<< result[0] << " " << "max :"<<result[1] << endl;
    return 0;
}