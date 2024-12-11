#include<iostream>
using namespace std;

int front=-1;
int back=-1;
int arr[5];

void enqueue(int n)
{
	if(back>=4)
	{
		cout<<"Queue is overflow.\n";
		return;
	}
	if(front==-1)
	{
		front=0;
	}
	back++;
	arr[back]=n;
}

void dequeue()
{
	if(back<=-1 || front > back)
	{
		cout<<"Queue is underflow.";
		return;
	}
	int data=arr[front];
	front++;
	
	if(front>back)
	{
		front =-1;
		back =-1;
	}
}

void display()
{
	cout<<"Queue is= ";
	for(int i=front; i<=back;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	enqueue(45);
	enqueue(12);
	enqueue(89);
	enqueue(50);
	enqueue(3);
	enqueue(90);
	display();
	
	cout<<"\nAfter Dequeue: "<<endl;
	dequeue();
	dequeue();
	display();
}