#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n, int k)
{
    int i, j;
    for (i = 0; i < k; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
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
    bubbleSort(arr, n, k);
    cout<<"Array after "<<k<<"th iteration : \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
