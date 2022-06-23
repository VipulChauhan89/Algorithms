/*
  Program to implement jump search
*/
import java.util.*;
public class jump_search
{
    void linear_search(int A[],int i,int n,int search)
    {
        for(;i<n;i++)
        {
            if(A[i]==search)
            {
                System.out.println(search+" is present in an array.\n");
                return;
            }
        }
        System.out.println(search+" is not present in an array.\n");
    }
    void jump(int A[],int n,int search)
    {
        int i;
        for(i=1;i<n;i=i*2)
        {
            if(A[i]>search)
            {
                break;
            }
        }
        linear_search(A,i/2,n,search);
    }

    public static void main(String args[])
    {
        jump_search a=new jump_search();
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
        a.jump(arr,N-1,search);
    }
}