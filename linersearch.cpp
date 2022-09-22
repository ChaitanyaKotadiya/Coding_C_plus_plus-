#include <iostream>
#include <climits>
using namespace std;
int search( int a[],int n, int key)
{
    for (int i = 1; i <= n; i++)
    {
        if (key == a[i])
        {
                return i;
            }
    }
        return -1;

}
int main()
{
    int n;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    int key;
    cin >> key;
    cout << search(a,n,key);


}
