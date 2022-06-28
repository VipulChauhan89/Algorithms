/*
    Counting Sort
    Time Complexity
        Best Case Scenario  : O(n+k)
        Average Case Scenario  : O(n+k)
        Worst Case Scenario : O(n+k)
*/
import java.util.*;
public class counting_sort
{
    static public void countingSort(int A[],int n)
    {
        int k=A[0],i;
        int output[]=new int[n];
        for(i=0;i<n;i++)
        {
            if(k<A[i])
            {
                k=A[i];
            }
        }
        int count[]=new int[k+1];
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
    public static void main(String args[])
    {
        int arr[]={1,10,30,20,2,11,15};
        int n=arr.length;
        countingSort(arr,n);
        System.out.print("Array after counting sort : ");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
