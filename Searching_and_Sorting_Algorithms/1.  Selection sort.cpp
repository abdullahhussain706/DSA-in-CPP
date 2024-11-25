#include<iostream>
using namespace std;

void selectionsort(int arr[],int size)  //function for sorting
{
	int minindex;
	for(int i=0;i<size-1;i++)	//outer loop
	{
		minindex=i;
		for(int j=i+1;j<size;j++)	//inner loop
		{
			if(arr[j]<arr[minindex])
			{
				minindex=j;
			}
		}
		if(minindex != i)	//If the minimum element is not in the current position
		{		//swap numbers
			int temp=arr[i];
			arr[i]=arr[minindex];
			arr[minindex]=temp;
			
		}
	}
	cout<<"Sorted Array:";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int size;
	cout<<"Enter Size of Array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter Element of Array: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	selectionsort(arr,size);
	return 0;
}
