#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int a,b;
    cin>>a>>b;
    char opp;
    cin>>opp;
    switch (opp)
    {
    case '+':
    {
        cout<<a+b<<endl;
    break;
    }
      case '-':
    {
        cout<<a-b<<endl;
    break;
    }
    case '*':
    {
        cout<<a*b<<endl;
    break;
    }
    case '/':
    {
        cout<<a/b<<endl;
    break;
    }
        
    default:
        cout<<"Enter the valide case";
    }
}
