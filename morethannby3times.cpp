#include <bits/stdc++.h>
using namespace std;

int majorityElementNby3(const vector<int>& nums) {
    int n = nums.size();
    int cand1 = -1, cand2 = -1;
    int count1 = 0, count2 = 0;

    for (int x : nums) {
        if (x == cand1)
            count1++;
        else if (x == cand2)
            count2++;
        else if (count1 == 0) {
            cand1 = x;
            count1 = 1;
        }
        else if (count2 == 0) {
            cand2 = x;
            count2 = 1;
        }
        else {
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;
    for (int x : nums) {
        if (x == cand1) count1++;
        else if (x == cand2) count2++;
    }

    if (count1 > n / 3) return cand1;
    if (count2 > n / 3) return cand2;
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1};
    cout <<"Manjority Element is "<< majorityElementNby3(arr);
    return 0;
}
