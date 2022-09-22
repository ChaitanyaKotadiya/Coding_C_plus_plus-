#include<iostream>
#include<math.h>
using namespace std;
main()
{  
    int n,m;
    cin>>n>>m;
 for(int i=1;i<=m;i++)
{
    for(int j=1;j<=i-1;j++)
    {
        cout<<" ";
    }
    for(int j=1;j<=n;j++)
    {
        int i;
        if((i+j)%2==0 || (i+j)%3==0)
        {
            if(i==2 && j%2==0)
            {
                cout<<" ";
            }
            else if(i==j)
            {
                cout<<"* ";           
            }
            cout<<"*"<<" ";

        }
    
    }
    cout<<endl;
}



}