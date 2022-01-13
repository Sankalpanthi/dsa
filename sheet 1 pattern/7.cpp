#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ct;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern :\n";
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
            cout<<n-j;
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=5;j>i;j--)
            cout<<j;
        cout<<endl;
    }
    return 0;
}
