/*
    Merge Sort
    Time Complexity
        Best Case Scenario  : O(n*log n)
        Average Case Scenario : O(n*log n)
        Worst Case Scenario : O(n*log n)
*/
#include <iostream>
using namespace std;
void merge(int *arr,int l,int mid,int h) 
{
    int i=l,j=mid+1,k=l;
    int temp[h+1];
    while(i<=mid && j<=h) 
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++]; 
        }
        else 
        {
            temp[k++]=arr[j++]; 
        }
    }
    while(i<=mid) 
    {
        temp[k++]=arr[i++]; 
    }
    while(j<=h) 
    {
        temp[k++]=arr[j++]; 
    }
    for(int p=l;p<=h;p++) 
    {
        arr[p]=temp[p]; 
    } 
}
void mergesort(int *arr,int l,int h)
{
    int mid;
    if(l<h) 
    {
        mid=(l+h)/2;
        mergesort(arr,l,mid); 
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h); 
    } 
}
int main() 
{
    int arr[]={1,-10,-30,20,2,11,15};
    int n=sizeof(arr)/sizeof(arr[0]),i;
    mergesort(arr,0,n-1);
    cout<<"Array after merge sort : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
