#include<iostream>
#include<math.h>
using namespace std;
int fib(int n)
{
    int a=0,b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=0;i<=n;i++)
    {
        int c=a+b;
        a=b;
        b=c;
    return c;
    }
    
}
main()
{
    int n,c;
    cin>>n;
    fib(n);
    cout<<c<<endl;
}