/*
  Program to implement binary search
*/
import java.util.*;
public class binarySearch
{
    int Binary(int A[],int l,int h,int search)
    {
        if(l<=h)
        {
            int mid=l+(h-l)/2;
            if(A[mid]==search)
            {
                return mid;
            }
            else if(A[mid]>search)
            {
                return Binary(A,l,mid-1,search);
            }
            else 
            {
                return Binary(A,mid+1,h,search);
            }
        }
        return -1;
    }
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int N,T,search;
	    System.out.print("Enter the number of elements you want to enter in an array : ");
	    N=in.nextInt();
	    int arr[]=new int[N];
	    System.out.print("Enter "+N+" sorted elements : ");
	    for(int i=0;i<N;i++)
	    {
		    arr[i]=in.nextInt();
	    }
	    System.out.print("Enter the element you want to search : ");
	    search=in.nextInt();
        binarySearch a=new binarySearch();
        int ans=a.Binary(arr,0,N-1,search);
	    if(ans==-1)
	    {
		    System.out.println(search+" is not present in an array.");
	    }
        else
        {
            System.out.println(search+" is found at index "+ans);
        }
    }
}
