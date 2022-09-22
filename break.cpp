#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
    {
        continue;
    }
    cout<<i<<endl;
    }
    
}