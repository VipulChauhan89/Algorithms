/*
    Selection Sort
    Time Complexity
        Best Case Scenario  : O(n^2)
        Average Case Scenario : O(n^2)
        Worst Case Scenario : O(n^2)
*/
import java.util.*;
public class SelectionSort
{
    static void selection_sort(int A[],int n)
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
            int temp=A[min];
            A[min]=A[i];
            A[i]=temp;
        }
    }
    public static void main(String args[])
    {
        int arr[]={1,-10,-30,20,2,11,15};
        int n=arr.length,i;
        selection_sort(arr,n);
        System.out.print("Array after Selection sort : ");
        for(i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
