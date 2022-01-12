#include<bits/stdc++.h>
using namespace std;
void sumPat(int n,int a=0,int b=1)
{
    if(n==0)
        return;
    cout<<a<<" ";
    sumPat(n-1,b,a+b);
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"First "<<n<<" fibonacci numbers:\n";
    sumPat(n);
}
