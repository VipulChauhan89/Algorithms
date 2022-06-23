/*
  Program to implement jump search
*/
#include<stdio.h>
void linear_search(int *A,int i,int n,int search)
{
    for(;i<n;i++)
    {
        if(A[i]==search)
        {
            printf("%d is present in an array.\n",search);
            return;
        }
    }
    printf("%d is not present in an array.\n",search);
}
void jump(int *A,int n,int search)
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

int main()
{
    int N,T,search;
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
    jump(arr,N-1,search);
	return 0;
}