
/*
    Quick Sort
    Time Complexity
        Best Case Scenario  : O(n*log n)
        Average Case Scenario : O(n*log n)
        Worst Case Scenario : O(n^2)
*/
import java.util.*;
public class QuickSort
{
    static int partion(int arr[],int l,int r)
    {
        int i,j,pivot;
        pivot=arr[r];
        i=l-1;
        for(j=l;j<r;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        int temp=arr[i+1];
        arr[i+1]=arr[r];
        arr[r]=temp;
        return i+1;
    }
    static void quick_sort(int arr[],int l,int r)
    {   
        if(l<r)
        {
            int pivot=partion(arr,l,r);
            quick_sort(arr,l,pivot-1);
            quick_sort(arr,pivot+1,r);
        }
        return;
    }
    public static void main(String args[])
    {
        int arr[]={1,-10,-30,20,2,11,15};
        int n=arr.length,i;
        quick_sort(arr,0,n-1);
        System.out.print("Array after quick sort : ");
        for(i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
