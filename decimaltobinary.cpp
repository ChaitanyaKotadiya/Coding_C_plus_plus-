#include <bits/stdc++.h>
using namespace std;
int decimaltobinary(int n)
{
    int x=1;
    int ans=0;
    while (x<=n)
    {
        x=x*2;
        x=x/2;
    }
    while(x>0)
    {
        int rem=n/x;
        n=n-rem*x;
        x=x/2;
        ans=ans*10+rem;
    }
cout<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    decimaltobinary(n);
}
