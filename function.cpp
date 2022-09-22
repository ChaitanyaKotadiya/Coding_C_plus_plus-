#include<iostream>
#include<math.h>
using namespace std;
int fact(int n)
{
     int fact=1;
     for(int i=2;i<=n;i++)
     {
         fact=fact*i;
     }
     cout<<fact<<endl;

        
}
int main()
{
    int n;
    cin>>n;
   fact(n);

}