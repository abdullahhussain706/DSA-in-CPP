// Priority Queue based on values of ASCII


#include<iostream>
using namespace std;
struct node
{
	int data;
	char pri;
	node *next;
};
class Priority_queue
{
	node *front,*back,*curr;
	public:
		Priority_queue()
		{
			front=NULL;
			back=NULL;
			curr=NULL;
		}
		void enqueue(int data,char priority)
		{
			node *newnode=new node;
			newnode->data=data;
			newnode->pri=priority;
			newnode->next=NULL;
			if(front==NULL)		// check for empty queue
			{
				front =newnode;
				back=newnode;
			}
			else if(priority< front->pri)  		// insert at start (high priority)
			{
				newnode->next = front;
                		front = newnode;
			}
			else if(priority >= back->pri)		// insert at end (low priority)
			{
				back->next=newnode;
				back=newnode;
			}
			else 		// insert at middle
            {
           		curr = front;
        		while (curr->next != NULL && curr->next->pri < priority)
            	{
                	curr = curr->next;
    			}
            	newnode->next = curr->next;
                curr->next = newnode;
            }
		}
		void display()
		{
			curr=front;
			while(curr!=NULL)
			{
				cout<<curr->data<<" "<<"("<<curr->pri<<")"<<"  ";
				curr=curr->next;
			}
		}
};
int main()
{
	Priority_queue obj;
	obj.enqueue(15,'1');
	obj.enqueue(45,'2');
	obj.enqueue(56,'1');
	obj.enqueue(89,'5');
	obj.enqueue(8,'3');
	obj.display();
	return 0;
}
