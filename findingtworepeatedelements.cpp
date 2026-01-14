#include <bits/stdc++.h>
using namespace std;

void twoRepeating(int A[], int size, int n) {
    int XOR = A[0];
    int right_most_bit;
    int X = 0, Y = 0;

    for (int i = 1; i <= n; i++)
        XOR ^= i;

    for (int i = 0; i < size; i++)
        XOR ^= A[i];

    right_most_bit = XOR & ~(XOR - 1);

    for (int i = 0; i < size; i++) {
        if (A[i] & right_most_bit)
            X ^= A[i];
        else
            Y ^= A[i];
    }

    for (int i = 1; i <= n; i++) {
        if (i & right_most_bit)
            X ^= i;
        else
            Y ^= i;
    }

    cout << "Two Repeated elements are: " << X << " and " << Y << endl;
}

int main() {
    int A[] = {1, 4, 5, 6, 3, 2, 5, 2};
    int size = sizeof(A) / sizeof(A[0]);
    int n = size-2;

    twoRepeating(A, size, n);

    return 0;
}

