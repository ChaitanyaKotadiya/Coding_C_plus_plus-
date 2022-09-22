#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=1+i;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
            
        }
        cout<<a[i];
    }
}