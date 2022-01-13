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
            if((i<n/2&&i<j&&i+j<n-1)||(i>n/2&&i>j&&i+j>n-1))
                cout<<" ";
            else
                cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}
