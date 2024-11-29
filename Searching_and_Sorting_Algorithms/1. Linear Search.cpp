#include<iostream>
using namespace std;

void linear(int n,int arr[]) //function for searching
{
	int loc=-1;
	for(int i=0;i<=5;i++)
	{
		if(n==arr[i])
		{
			loc=i;
		}
	}
	if(loc==-1)
	{
		cout<<"Found Error!";
	}
	else								//loction check
	{
		cout<<"Number Found at Index: "<<loc;
	}
}

int main()
{
	cout<<"Enter element of Array: ";
	int arr[5],num;
	for(int i=0;i<=5;i++)	//input array
	{
		cin>>arr[i];
	}
	cout<<"Enter Number for searching: ";
	cin>>num;
	linear(num,arr);	//function call
	
	return 0;
}
