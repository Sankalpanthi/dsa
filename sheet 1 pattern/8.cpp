#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern :\n";
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
            cout<<" ";
        for(j=0;j<=2*i;j++)
        {
            if(j==0||j==2*i)
                cout<<i+1;
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=i;j++)
            cout<<" ";
        for(j=i*2;j<=2*(n-2);j++)
        {
            if(j==i*2||j==2*(n-2))
                cout<<n-i-1;
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
