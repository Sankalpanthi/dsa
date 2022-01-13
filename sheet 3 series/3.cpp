#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,sign=1,fact=1;
    double sum=0;
    cout<<"Enter x and n respectively:";
    cin>>x>>n;
    for(i=1;i<=n;i++)
    {
        sum+=sign*pow(x,(i*2-2))/fact;
        fact*=(i*2)*(i*2-1);
        sign*=-1;
    }
    cout<<"Sum of series 1-x^2/2!+x^4/4!-x^6/6!+... : "<<sum;
    return 0;
}
