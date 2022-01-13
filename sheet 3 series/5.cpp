#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    int res=1;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern :\n";
    cout<<res<<" ";
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
            res*=2;
        else
            res=(res*3)/2;
        cout<<res<<" ";
    }
    return 0;
}
