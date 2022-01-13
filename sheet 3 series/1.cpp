#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    double sum=0;
    cout<<"Enter n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=1.0/(i*i);
    }
    cout<<"Sum of series 1+1/(2*2)+1/(3*3)+...+1/(n*n) : "<<sum;
    return 0;
}
