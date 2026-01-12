#include <bits/stdc++.h>
using namespace std;

int Number(string Title) {
    int num= 0;
    for (char c : Title) {
        int val = c - 'A' + 1;
        num = num * 26 + val;
    }
    return num;
}

int main() {
    string Title = "AB";
    cout << Number(Title);
    return 0;
}
