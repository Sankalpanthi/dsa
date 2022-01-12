#include<bits/stdc++.h>
using namespace std;
int sumPat(int n,int v)
{
    if(n==0)
        return 0;
    return v + sumPat(n-1,v*2);
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int sum = sumPat(n,1);
    cout<<"Sum of pattern 1+2+4+8... :"<<sum;
}
