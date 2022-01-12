#include<bits/stdc++.h>
using namespace std;
void printNatural(int n)
{
    if(n==0)
        return;
    cout<<n<<" ";
    printNatural(n-1);
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"First "<<n<<" natural numbers in reverse order:\n";
    printNatural(n);
}
