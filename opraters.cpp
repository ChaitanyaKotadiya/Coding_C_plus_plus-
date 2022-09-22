#include<iostream>
#include<cmath>
using namespace std;
int main()
{   
    int n,rem,rev=0;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        rev=rem+rev*10;
        n=n/10;

    }
    cout<<rev;
    

    return 0;
}