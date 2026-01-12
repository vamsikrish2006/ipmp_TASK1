#include <bits/stdc++.h>
using namespace std;

string Title(int Number) {
    string title = "";

    while (Number > 0) {
        Number--;          
        int rem = Number % 26;
        title.push_back('A' + rem);
        Number /= 26;
    }

    reverse(title.begin(), title.end());
    return title;
}

int main() {
    int Number = 28;
    cout << Title(Number);
    return 0;
}
