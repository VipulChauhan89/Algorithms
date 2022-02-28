/*
  Program to imlement Linear search algorithm
*/
#include<iostream>
using namespace std;
int main()
{
	int N,T,search,count=0;
	cout<<"Enter the number of elements you want to enter in an array : ";
	cin>>N;
	int arr[N];
	cout<<"Enter "<<N<<" elements : ";
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element you want to search : ";
	cin>>search;
	for(int i=0;i<N;i++)
	{
		if(search==arr[i])
		{
			cout<<search<<" is present in the arrray."<<endl;
			break;
		}
		count++;
	}
	if(count==N)
	{
		cout<<search<<" is not present in an array."<<endl;
	}
	return 0;
}
