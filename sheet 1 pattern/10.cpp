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
        for(j=0;j<n;j++)
        {
            if(j==i||j+i==n-1)
                cout<<i+1;
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
