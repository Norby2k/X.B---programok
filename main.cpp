#include <iostream>
using namespace std;
int main()
{
    int a[3],n;
    cin>>n;
    a[0]=0;
    a[1]=1;
    while (n>0)
    {
        a[2]=a[0]+a[1];
        cout<<a[2]<<" ";
        a[0]=a[1];
        a[1]=a[2];
        n--;
    }

    return 0;
}
