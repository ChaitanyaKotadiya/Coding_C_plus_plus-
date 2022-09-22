#include <iostream>
#include <math.h> 
#include <bits/stdc++.h>
/*all distinct numbers from to using vector */
using namespace std;
int main()
{
    vector<vector<int>>ans;
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));
    for (auto v : ans)
        for (auto i : v)
            cout << i << endl;
}