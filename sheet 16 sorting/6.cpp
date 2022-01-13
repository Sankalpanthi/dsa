#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n, int k)
{
    int i, j, key;
    for (i = 1; i <= k; i++)
    {
        j=i-1;
        key=arr[i];
        while(j>=0 && key<arr[j])
         {
             arr[j+1]=arr[j];
             j--;
         }
        arr[j+1]=key;
    }
}
int main()
{
    int i,n,k;
    cout<<"Enter n and k respectively: ";
    cin>>n>>k;
    int arr[n];
    cout<<"Enter array elements: \n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    insertionSort(arr, n, k);
    cout<<"Array after "<<k<<"th iteration : \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
