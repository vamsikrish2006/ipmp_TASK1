#include <bits/stdc++.h>
using namespace std;

void zerostolast(vector<int>& a) {
    int k = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i] != 0) {
            swap(a[i], a[k]);
            k++;
        }        
}

int main() {
    vector<int> a = {1, 2, 0, 4, 3, 0, 5, 0};
    zerostolast(a);
    for (int x : a) cout << x << " ";
}

