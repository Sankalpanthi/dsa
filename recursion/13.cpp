#include<bits/stdc++.h>
using namespace std;
void toh(int n,char from,char to,char aux)
{
    if(n==0)
        return;
    toh(n-1,from,aux,to);
    cout<<"Move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    toh(n-1,aux,to,from);

}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    toh(n,'A','B','C');
}
