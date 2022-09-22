#include <iostream>      //input output
#include <climits>       //INT_MAX or INT_MIN
#include <math.h>        //math function
#include <bits/stdc++.h> //string na function..size  vala
using namespace std;
int binarysearch(int a[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = s + e / 2;

        if (key == a[mid])
        {
            return mid;
        }
        else if (a[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
main()
{
    int n, a[n],key;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> key;
    cout << binarysearch(a, n, key);
return 0;
}