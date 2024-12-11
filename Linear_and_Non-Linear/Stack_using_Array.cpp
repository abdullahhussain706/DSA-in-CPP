#include<iostream>
using namespace std;

int top=-1;
int arr[5];

void push(int n)
{
	if(top>=4)
	{
		cout<<"Stack is overflow."<<endl;
		return;
	}
	top++;
	arr[top]=n;
}

void pop()
{
	int data;
	if(top==-1)
	{
		cout<<"Stack is underflow."<<endl;
		return;
	}
	data=arr[top];
	top--;
}

void print()
{
	for(int i=top;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
}

bool isempty()
{
	return top==-1;
}


bool isfull()
{
	return top==4;
}

int main()
{
	push(45);
	push(23);
	push(89);
	push(90);
	push(77);
	push(9);
	print();
	cout<<"\nPrint after Pop:";
	pop();
	print();
  if (isempty()) 
    {
        cout << "\nStack is empty." << endl;
    } 
	else 
	{
        cout << "\nStack is not empty." << endl;
    }

    if (isfull()) 
	{
        cout << "Stack is full." << endl;
    } 
	else 
	{
        cout << "Stack is not full." << endl;
    }
	
	return 0;
}
