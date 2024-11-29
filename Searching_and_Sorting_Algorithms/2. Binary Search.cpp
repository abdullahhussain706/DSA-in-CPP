#include<iostream>
using namespace std;

void binary(int n,int arr[],int size)
{
	int loc=-1,start=0,end=size-1,mid;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(n==arr[mid])
		{
			loc=mid;
			break;
		}
		else if(n<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	if(loc==-1)
	{
		cout<<"Found Error!";
	}
	else
	{
		cout<<"Number found at index: "<<loc;
	}
}

int main()
{
	int num,size;
	cout<<"Enter Size of: ";
	cin>>size;
	int arr[size];
	cout<<"Enter Elements Of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter Searching Number: ";
	cin>>num;
	binary(num,arr,size);
	return 0;
}
