#include <bits/stdc++.h>
using namespace std;

int OddOneout(vector<int>& ar)
{
    int ans= 0; 
    for (int i = 0; i < ar.size(); i++)     
        ans ^= ar[i];
    return ans;
}

int main()
{
    vector<int> ar = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    cout << "number occuring odd times is :"<< OddOneout(ar);
    return 0;
}