/*
  Program to implement linear search
*/
#include<stdio.h>
int main()
{
	int N,T,search,count=0;
	printf("Enter the number of elements you want to enter in an array : ");
	scanf("%d",&N);
	int arr[N];
	printf("Enter %d elements : ",N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to search : ");
	scanf("%d",&search);
	for(int i=0;i<N;i++)
	{
		if(search==arr[i])
		{
			printf("%d is present in the arrray.\n",search);
			break;
		}
		count++;
	}
	if(count==N)
	{
		printf("%d is not present in an array.\n",search);
	}
	return 0;
}
