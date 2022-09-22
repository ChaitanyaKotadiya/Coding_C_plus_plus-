#include<iostream>
using namespace std;
int main()
{
    int n,i;
 int max=0;

    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)
    {

        if(a[i]>max)
        {
            max=a[i];
            }

    }
        cout<<max<<" "<<endl;


return 0;
}
//max=max(max,a[i]);
//min=min(min,a[i]);