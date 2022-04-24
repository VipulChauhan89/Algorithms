/*
    Selection Sort
    Time Complexity
        Best Case Scenario  : O(n^2)
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
void selection_sort(int *A,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        swap(A[min],A[i]);
    }
}
int main()
{
    int arr[]={1,-10,-30,20,2,11,15};
    int n=sizeof(arr)/sizeof(arr[0]),i;
    selection_sort(arr,n);
    cout<<"Array after bubble sort : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
