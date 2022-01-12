#include<bits/stdc++.h>
using namespace std;
int sumPat(int n)
{
    if(n==0)
        return 0;
    return n*n + sumPat(n-1);
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int sum = sumPat(n);
    cout<<"Sum of pattern 1^1+2^2+3^3+4^4... :"<<sum;
}
