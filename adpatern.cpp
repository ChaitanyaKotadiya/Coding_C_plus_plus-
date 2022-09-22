#include<iostream>//input output
#include<climits>//INT_MAX or INT_MIN
#include<math.h>//math function
#include<bits/stdc++.h>//string na function..size  vala
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"   ";
        }
        int k=i;
        for(int j=1;j<=i;j++)
        {
            cout<<k--<<"  ";
        }
        int counter=2;
        for(int j=1;j<=i-1;j++)
        {
            cout<<counter++<<"  ";
        }
        cout<<endl;
    }
}