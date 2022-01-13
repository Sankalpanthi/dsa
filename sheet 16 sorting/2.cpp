#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, pos;
    for (i = 0; i < n-1; i++)
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
    int i,n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: \n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    selectionSort(arr, n);
    cout<<"Sorted array: \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
