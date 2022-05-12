/*
    Randomize Quick Sort
    Time Complexity
        Best Case Scenario  : O(n*log n)
        Average Case Scenario : O(n*log n)
        Worst Case Scenario : O(n*log n)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partion(int arr[],int l,int r)
{
    int random=l+rand()%(r+l);
    swap(&arr[random],&arr[r]);
    int i,j,pivot;
    pivot=arr[r];
    i=l-1;
    for(j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}
void randomize_quick_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pivot=partion(arr,l,r);
        randomize_quick_sort(arr,l,pivot-1);
        randomize_quick_sort(arr,pivot+1,r);
    }
    return;
}
int main()
{
    int arr[]={1,-10,-30,20,2,11,15};
    int n=sizeof(arr)/sizeof(arr[0]),i;
    randomize_quick_sort(arr,0,n-1);
    printf("Array after randomize quick sort : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
