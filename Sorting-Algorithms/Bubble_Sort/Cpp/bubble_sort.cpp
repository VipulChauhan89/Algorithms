/*
    Bubble Sort
    Time Complexity
        Best Case Scenario  : O(n)
        Worst Case Scenario : O(n^2)
*/
#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    *a= *a + *b;
    *b= *a - *b;
    *a= *a - *b;
}
void bubble_sort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[]={1,-10,-30,20,2,11,15};
    int n=sizeof(arr)/sizeof(arr[0]),i;
    bubble_sort(arr,n);
    cout<<"Array after bubble sort : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
