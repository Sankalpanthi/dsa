 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,row_prod,col_prod;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Pascal triangle :\n";
    for(i=1;i<=n;i++)
    {
        row_prod=1;
        col_prod=1;
        for(j=i;j<n-1;j++)
            cout<<" ";
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i)
                cout<<1<<" ";
            else{
                row_prod*=(i-j+1);
                col_prod*=j-1;
                cout<<row_prod/col_prod<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
