#include <bits/stdc++.h>
using namespace std;

void Union(int a[], int b[], int n, int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (i > 0 && a[i] == a[i - 1]) { i++; continue; }
        if (j > 0 && b[j] == b[j - 1]) { j++; continue; }

        if (a[i] < b[j]) cout << a[i++] << " ";
        else if (a[i] > b[j]) cout << b[j++] << " ";
        else {
            cout << a[i] << " ";
            i++; j++;
        }
    }

    while (i < n) {
        if (i == 0 || a[i] != a[i - 1])
            cout << a[i] << " ";
        i++;
    }

    while (j < m) {
        if (j == 0 || b[j] != b[j - 1])
            cout << b[j] << " ";
        j++;
    }
}


void Intersection(int a[], int b[], int n, int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (i > 0 && a[i] == a[i - 1]) { i++; continue; }
        if (j > 0 && b[j] == b[j - 1]) { j++; continue; }

        if (a[i] < b[j]) i++;
        else if (a[i] > b[j]) j++;
        else {
            cout << a[i] << " ";
            i++; j++;
        }
    }
}


int main() {
    int a[] = {1, 2, 2, 3, 4};
    int b[] = {2, 2, 4, 6};

    int n  = sizeof(a) / sizeof(a[0]);
     int m = sizeof(b) / sizeof(b[0]);

    cout << "Union: ";
    Union(a, b, n, m);

    cout << "\nIntersection: ";
    Intersection(a, b, n, m);

    return 0;
}

