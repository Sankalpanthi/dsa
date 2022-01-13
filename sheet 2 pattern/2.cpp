#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a=0,b=1,temp;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pattern :\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<b<<" ";
            temp=a+b;
            a=b;
            b=temp;
        }
        cout<<endl;
    }
    return 0;
}
