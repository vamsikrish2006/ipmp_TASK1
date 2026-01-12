#include <bits/stdc++.h>
using namespace std;

vector<int> findRepeatingAndMissing(const vector<int>& arr) {
    int n = arr.size();
    int xorAll = 0;
    for (int x : arr)
        xorAll ^= x;
    for (int i = 1; i <= n; i++)
        xorAll ^= i;

    int setBit = xorAll & -xorAll;
    int x = 0, y = 0;
    for (int num : arr) {
        if (num & setBit)
            x ^= num;
        else
            y ^= num;
    }

    for (int i = 1; i <= n; i++) {
        if (i & setBit)
            x ^= i;
        else
            y ^= i;
    }

    for (int num : arr) {
        if (num == x)
            return {x, y};  
    }
    return {y, x};     
}

int main() {
    vector<int> arr = {3, 1, 2, 5, 3};
    vector<int> ans = findRepeatingAndMissing(arr);
    cout << "Repeated element is :"<<ans[0] <<"\n Duplicate elemnt is :"<< ans[1];
    return 0;
}
