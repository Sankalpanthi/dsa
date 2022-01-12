#include<bits/stdc++.h>
using namespace std;
float sumPat(int n,float v)
{
    if(n==0)
        return 0;
    return 1/v + sumPat(n-1,v*3);
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    float sum = sumPat(n,1.0);
    cout<<"Sum of pattern 1+1/3+1/9+1/27... :"<<sum;
}
