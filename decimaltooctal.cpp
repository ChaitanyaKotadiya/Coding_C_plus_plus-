#include<iostream>
#include<math.h>
#include <bits/stdc++.h>
using namespace std;
int decimaltobinary(int n)
{
    int x=1;
    int ans=0;
    while (x<=n)
        x=x*8;
        x=x/8;
    
    while(x>0)
    {
        int rem=n/x;
        n=n-(rem*x);
        x=x/8;
        ans=ans*10+rem;
    }
return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimaltobinary(n)<<endl;
}
