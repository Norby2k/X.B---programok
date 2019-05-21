#include <iostream>
#include <fstream>
int y;
using namespace std;
int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    int a[n],k;
    for (int m=0; m<n; i++) in>>a[m];
    for (int i=0; i<n-1; i++ )
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[j]>a[i])
            {
                k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
        }
    }
    int sajt=a[1]*a[n-1];
    while (sajt>0)
    {
        int x=sajt%10;
        y=y*10+x;
        sajt/=10;
    }
    out<<y;
    return 0;
}
