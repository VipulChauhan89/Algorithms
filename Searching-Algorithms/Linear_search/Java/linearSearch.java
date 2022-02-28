/*
  Program to implement linear search
*/
import java.util.*;
public class linearSearch
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		int N,search,count=0;
		System.out.print("Enter the number of elements you want to enter in an array : ");
		N=in.nextInt();
		int[] arr= new int[N];
		System.out.print("Enter "+N+" elements : ");
		for(int i=0;i<N;i++)
		{
			arr[i]=in.nextInt();
		}
		System.out.print("Enter the element you want to search : ");
		search=in.nextInt();
		for(int i=0;i<N;i++)
		{
			if(search==arr[i])
			{
				System.out.println(search+" is present in the array.");
				break;
			}
			count++;
		}
		if(count==N)
		{
			System.out.println(search+" is not present in an array.");
		}
	}

}
