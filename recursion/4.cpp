#include<bits/stdc++.h>
using namespace std;
void printNatural(int n)
{
    if(n<=0)
        return;
    printNatural(n-2);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"First "<<n<<" odd numbers:\n";
    printNatural(2*n-1);
}
