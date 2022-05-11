
/*
    Quick Sort
    Time Complexity
        Best Case Scenario  : O(n*log n)
        Average Case Scenario : O(n*log n)
        Worst Case Scenario : O(n^2)
*/
#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int partion(int arr[],int l,int r)
{
    int i,j,pivot;
    pivot=arr[r];
    i=l-1;
    for(j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void quick_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pivot=partion(arr,l,r);
        quick_sort(arr,l,pivot-1);
        quick_sort(arr,pivot+1,r);
    }
    return;
}
int main()
{
    int arr[]={1,-10,-30,20,2,11,15};
    int n=sizeof(arr)/sizeof(arr[0]),i;
    quick_sort(arr,0,n-1);
    cout<<"Array after quick sort : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
