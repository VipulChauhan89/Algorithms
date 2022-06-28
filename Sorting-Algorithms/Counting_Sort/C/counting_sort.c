/*
    Counting Sort
    Time Complexity
        Best Case Scenario  : O(n+k)
        Average Case Scenario  : O(n+k)
        Worst Case Scenario : O(n+k)
*/
#include <stdio.h>
void countingSort(int *A,int n)
{
    int k=A[0],i;
    int output[n];
    for(i=0;i<n;i++)
    {
        if(k<A[i])
        {
            k=A[i];
        }
    }
    int count[k+1];
    for(i=0;i<=k;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count[A[i]]++;
    }
    for(i=1;i<=k;i++)
    {
        count[i]+=count[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        output[--count[A[i]]]=A[i];
    }
    for(i=0;i<n;i++)
    {
        A[i]=output[i];
    }
}
int main()
{
    int arr[]={1,10,30,20,2,11,15};
    int n=sizeof(arr)/sizeof(arr[0]),i;
    countingSort(arr,n);
    printf("Array after counting sort : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
