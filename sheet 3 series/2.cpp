#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    int sum=0;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            sum+=j;
    cout<<"Sum of series 1+(1+2)+(1+2+3)+...+(1+2+3+...+n) : "<<sum;
    return 0;
}
