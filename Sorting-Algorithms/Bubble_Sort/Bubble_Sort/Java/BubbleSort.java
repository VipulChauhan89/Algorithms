/*
    Bubble Sort
    Time Complexity
        Best Case Scenario  : O(n)
        Worst Case Scenario : O(n^2)
*/
import java.util.*;
public class BubbleSort
{
    static void bubble_sort(int arr[],int n)
    {
        int i,j;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    arr[j]=arr[j]+arr[j+1];
                    arr[j+1]=arr[j]-arr[j+1];
                    arr[j]=arr[j]-arr[j+1];
                }
            }
        }
    }
    public static void main(String args[])
    {
        int arr[]={1,-10,-30,20,2,11,15};
        int n=arr.length;
        bubble_sort(arr,n);
        System.out.print("Array after bubble sort : ");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
