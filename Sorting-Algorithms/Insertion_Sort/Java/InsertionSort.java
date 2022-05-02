/*
    Insertion Sort
    Time Complexity
        Best Case Scenario  : O(n)
        Worst Case Scenario : O(n^2)
*/
import java.util.*;
public class InsertionSort
{
    static void insertion_sort(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }   
            arr[j+1]=key;
        }
    }
    public static void main(String args[])
    {
        int arr[]={1,-10,-30,20,2,11,15};
        int n=arr.length;
        insertion_sort(arr,n);
        System.out.print("Array after insertion sort : ");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
