#include<bits/stdc++.h>
using namespace std;
int sumPat(int n)
{
    if(n==1)
        return 1;
    return n * sumPat(n-1);
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int fact = sumPat(n);
    cout<<"Factorial of "<<n<<" :"<<fact;
}
