//Reversing the Linked List 
#include<iostream>
using namespace std;

struct node{
	int data;
	node*link;
};
node*start=NULL;

//Function Declaration

void insert(int);
void reverse(node*);
void display();

//main Method
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	reverse(start);
	display();
	return 0;
}

void insert(int info)
{
	node*ptr=new node;
	ptr->data=info;
	ptr->link=NULL;
	if(start==NULL)
		start=ptr;
	else
	{
		node*temp=start;
		while(temp->link!=NULL)
			temp=temp->link;
		temp->link=ptr;		
	}	
}

void reverse(node*p)
{
	if(p->link==NULL)
	{	
		start=p;
		return;
	}
	reverse(p->link);
	node*q=p->link;
	q->link=p;
	p->link=NULL;		
}

void display()
{
	if(start==NULL)
		return;
	node*ptr=start;
	while(ptr->link!=NULL){
		cout<<ptr->data<<"->";
		ptr=ptr->link;
	}	
	cout<<ptr->data;
}
