#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};
class queue
{
	node *curr,*front,*back;
	public:
		
	//Constructor to intiaize pointers
	queue()
	{
		curr=NULL;
		front=NULL;
		back=NULL;
	}
	//function to enter data in queue
	void enqueue(int data)
	{
		node *newnode = new node;
		newnode->data=data;
		newnode->next=NULL;
		
		if(front==NULL)		//check for empty queue
		{
			front=newnode;
			back=newnode;
		}
		else			//add every new node
		{
			curr=back;
			curr->next=newnode;
			back=newnode;	
		}
	}
	
	void dequeue()		//function to delete node from queue
	{
		node *temp= front;
		front=front->next;
		temp->next=NULL;
		delete temp;
	}
	
	void display()		//function to display queue
	{
		curr=front;
		while(curr!=NULL)
		{
			cout<<curr->data<<" ";
			curr=curr->next;
		}
	}
};

int main()
{
	queue obj;
	cout<<"Queue: ";
	obj.enqueue(5);
	obj.enqueue(36);
	obj.enqueue(89);
	obj.enqueue(12);
	obj.enqueue(250);
	obj.display();
	cout<<"\nAfter Dequeue: ";
	obj.dequeue();
	obj.dequeue();
	obj.display();
	return 0;
}
