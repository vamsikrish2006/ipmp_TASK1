#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n) {
    vector<int> pos, neg;

    for (int i = 0; i < n; i++)
        (arr[i] >= 0 ? pos : neg).push_back(arr[i]);

    int i = 0, p = 0, ng = 0;
    while (p < pos.size() && ng < neg.size()) {
        arr[i++] = pos[p++];
        arr[i++] = neg[ng++];
    }

    while (p < pos.size()) arr[i++] = pos[p++];
    while (ng < neg.size()) arr[i++] = neg[ng++];
}

int main() {
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    for (int x : arr) cout << x << " ";
}
