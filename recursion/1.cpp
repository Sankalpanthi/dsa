#include<bits/stdc++.h>
using namespace std;
void printNatural(int n)
{
    if(n==0)
        return;
    printNatural(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"First "<<n<<" natural numbers:\n";
    printNatural(n);
}
