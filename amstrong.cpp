#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int sum=0;
    int temp=n;
    while (n>0)
    {
        int rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(sum==temp)
    {
            cout<<"it is Amstrong\n";
     }
     else
     {
         cout<<"it not";
     }
    
}
