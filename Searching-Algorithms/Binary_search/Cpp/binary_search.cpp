/*
  Program to implement binary search
*/
#include<iostream>
using namespace std;
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
    int N,T,search;
	cout<<"Enter the number of elements you want to enter in an array : ";
	cin>>N;
	int arr[N];
	cout<<"Enter "<<N<<" sorted elements : ";
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search : ";
	cin>>search;
    int ans=Binary(arr,0,N-1,search);
	if(ans==-1)
	{
		cout<<search<<" is not present in an array."<<endl;
	}
    else
    {
        cout<<search<<" is found at index "<<ans<<endl;
    }
	return 0;
}
