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
        for(j=0;j<i;j++)
            cout<<" ";
        for(j=i;j<n*2-1-i;j++)
        {
            if(j==i||j==2*n-2-i)
                cout<<(char)(n+'A'-i-1);
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
