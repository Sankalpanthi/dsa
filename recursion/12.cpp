#include<bits/stdc++.h>
using namespace std;
int sumPat(int n,int a=0,int b=1)
{
    static int sum =0;
    if(n==1)
        return sum;
    sum+=b;
    return sumPat(n-1,b,a+b);
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int sum = sumPat(n);
    cout<<"Sum: "<<sum;
}
