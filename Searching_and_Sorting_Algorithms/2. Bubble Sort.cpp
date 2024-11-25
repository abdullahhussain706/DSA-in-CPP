#include<iostream>
using namespace std;

void bubblesort(int arr[],int size)
{
	int temp,minindex;
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int num;
	cout<<"Enter Size for Array: ";
	cin>>num;
	int arr[num];
	cout<<"Enter Elements Of Array: ";
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	bubblesort(arr,num);
	return 0;
}
