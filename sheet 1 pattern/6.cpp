#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ct;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern :\n";
    for(i=0;i<n;i++)
    {
        ct=i*2+1;
        for(j=i;j<n-1;j++)
            cout<<" ";
        for(j=ct;j>=1;j--)
            cout<<j;
        cout<<endl;
    }
    return 0;
}
