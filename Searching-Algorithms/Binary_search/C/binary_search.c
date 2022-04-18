/*
  Program to implement binary search
*/
#include<stdio.h>
int Binary(int *A,int l,int h,int search)
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
int main()
{
	int N,T,search,count=0;
	printf("Enter the number of elements you want to enter in an array : ");
	scanf("%d",&N);
	int arr[N];
	printf("Enter %d sorted elements : ",N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to search : ");
	scanf("%d",&search);
    int ans=Binary(arr,0,N-1,search);
	if(ans==-1)
	{
		printf("%d is not present in an array.\n",search);
	}
    else
    {
        printf("%d is found at index %d\n",search,ans);
    }
	return 0;
}
