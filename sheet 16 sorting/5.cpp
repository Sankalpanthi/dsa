#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n,int k)
{
    int i, j, pos;
    for (i = 0; i < k; i++)
    {
        pos=i;
        for (j = i+1; j < n; j++)
            if (arr[pos] > arr[j])
                pos=j;
        swap(&arr[i], &arr[pos]);
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
    selectionSort(arr, n, k);
    cout<<"Array after "<<k<<"th iteration : \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
