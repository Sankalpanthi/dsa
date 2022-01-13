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
        for(j=0;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}
