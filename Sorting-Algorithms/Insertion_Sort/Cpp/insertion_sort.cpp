/*
    Insertion Sort
    Time Complexity
        Best Case Scenario  : O(n)
        Average Case Scenario : O(n^2)
        Worst Case Scenario : O(n^2)
*/
#include <iostream>
using namespace std;
void insertion_sort(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        int key=A[i];
        int j=i-1;
        while(j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}
int main()
{
    int arr[]={1,-10,-30,20,2,11,15};
    int n=sizeof(arr)/sizeof(arr[0]),i;
    insertion_sort(arr,n);
    cout<<"Array after bubble sort : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
