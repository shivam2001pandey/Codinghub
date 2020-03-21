//wap to perform Linked List
#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;

//Structure of the node
struct node
{
int info;
node*next;
}*start=NULL;

//Declaration of the Functions
node*createNode(int);
void insertBeg(int);
void insertEnd(int);
void insertPos(int,int);
void deleteBeg();
void deleteEnd();
void deletePos(int);
void traversing();
void countNode();
void star();

//Main Function
int main()
{
system("cls");
int n,op,pos;
node*newptr;
do
{
cout<<"\n\t\t\t";
star();
cout<<"\t\t\tSingly Linked List\n\t\t\t";
star();
cout<<"\n\t\t\t1. Creation Of Node";
cout<<"\n\t\t\t2. Insertion Of Node At Beginning";
cout<<"\n\t\t\t3. Insertion Of Node At The End";
cout<<"\n\t\t\t4. Insertion Of Node At Any Specified Position";
cout<<"\n\t\t\t5. Deletion of Node From The Beginning";
cout<<"\n\t\t\t6. Deletion Of Node From The End";
cout<<"\n\t\t\t7. Deletion Of Node At Any Specified Position";
cout<<"\n\t\t\t8. Traversing The Node";
cout<<"\n\t\t\t9. Counting The Nodes";
cout<<"\n\t\t\t10.Exit";
cout<<"\n\nEnter The Option[1-10]:";
cin>>op;
switch(op)
{
case 1:
       {
	system("cls");
	cout<<"\t\t\t";
	star();
	cout<<"\t\t\tCreating Node\n\t\t\t";
	star();
	cout<<"\nEnter the Information:";
	cin>>n;
	newptr=createNode(n);
	if(newptr!=NULL)
	 cout<<"\nNode Created Successfully\n\n";
	else
	 cout<<"\nIssue While Creating Node";
	system("pause");
	system("cls");
	break;
       }

case 2:
	{
	 system("cls");
	 cout<<"\t\t\t";
	 star();
	 cout<<"\t\t\tInserting Node At The Beginning\n\t\t\t";
	 star();
	 cout<<"\nEnter The Information:";
	 cin>>n;
	 insertBeg(n);
	 system("\npause");
	 system("cls");
	 break;
	}
case 8:
	{
	 system("cls");
	 cout<<"\t\t\t";
	 star();
	 cout<<"\t\t\tTtraversing Node\n\t\t\t";
	 star();
	 traversing();
	 getch();
	 system("\npause");
	 system("cls");
	 break;
	}
case 5:
	{
	 system("cls");
	 cout<<"\t\t\t";
	 star();
	 cout<<"\t\t\tDeleting Node From Beginning\n\t\t\t";
	 star();
	 deleteBeg();
	 system("\npause");
	 system("cls");
	 break;
	}
case 4:
	{
	 system("cls");
	 cout<<"\t\t\t";
	 star();
	 cout<<"\t\t\tInserting Node At Any Specified Position\n\t\t\t";
	 star();
	 cout<<"\nEnter the Information:";
	 cin>>n;
	 cout<<"\nEnter The Position To Insert Node:";
	 cin>>pos;
	 insertPos(n,pos);
	 system("\npause");
	 system("cls");
	 break;
	}

case 6:
	{
	 system("cls");
	 cout<<"\t\t\t";
	 star();
	 cout<<"\t\t\tDeleting Node From End\n\t\t\t";
	 star();
	 deleteEnd();
	 system("\npause");
	 system("cls");
	 break;
	}
case 7:
	{
	 system("cls");
	 cout<<"\t\t\t";
	 star();
	 cout<<"\t\t\tDeleting Node At Any Specified Position\n\t\t\t";
	 star();
	 cout<<"\nEnter The Position Of The Node To Be Deleted:";
	 cin>>pos;
	 system("cls");
	 deletePos(pos);
	 system("\npause");
	 system("cls");
	 break;
	}
case 9:
	{
	 system("cls");
	 cout<<"\t\t\t";
	 star();
	 cout<<"\t\t\tCoounting Node\n\t\t\t";
	 star();
	 countNode();
	 system("\npause");
	 break;
     system("cls");
	}
case 3:
	{
	 system("cls");
	 cout<<"\t\t\t";
	 star();
	 cout<<"\t\t\tInserting Node At The End\n\t\t\t";
	 star();
	 cout<<"\nEnter the Information:";
	 cin>>n;
	 insertEnd(n);
	 system("\npause");
	 system("cls");
	 break;
	}

case 10:
	{
	 system("cls");
	 cout<<"\nExiting the Program....";
	 exit(0);
	}
}
}while(1);

return 0;
}

//Function Definition

//Creation Of Node
node* createNode(int n)
{
 node *ptr=new node;
 ptr->info=n;
 ptr->next=NULL;
 return ptr;
}
//Inserting At The Beginning
void insertBeg(int t)
{
 node*ptr=new node;
 ptr->info=t;
 ptr->next=NULL;
 if(start==NULL)
  start=ptr;
 else
  {
   ptr->next=start;
   start=ptr;
  }
}
//Star Printing
void star()
{
 for(int i=0;i<20;i++)
  cout<<"*";
 cout<<endl;
}
//Traversing The Node
void traversing()
{

 node*ptr=start;
 while(ptr!=NULL)
  {
   cout<<ptr->info<<"->";
   ptr=ptr->next;
  }
 }

//Deleting from Beginning
void deleteBeg()
{
 if(start==NULL)
  {
   cout<<"\nThe List Is Empty";
   getch();
  }
 else
 {
  node*ptr;
  ptr=start;
  start=ptr->next;
  delete(ptr);
 }

}
//Insertion at the Last
void insertEnd(int t)
{
 node*temp=new node;
 node*ptr;
 temp->info=t;
 temp->next=NULL;
  if(start==NULL)
   start=temp;
  else
  {
   ptr=start;
   while(ptr->next!=NULL)
   ptr=ptr->next;
   ptr->next=temp;
  }
}
//Deletion  From The End
void deleteEnd()
{
 node*ptr,*temp;
 if(start==NULL)
  {
   cout<<"\nThe List Is Empty";
   getch();
  }
 else if(start->next==NULL)
 {
   ptr=start;
   start=NULL;
   delete(ptr);

  }
 else
  {

   ptr=start;
   while(ptr->next!=NULL)
    {
     temp=ptr;
     ptr=ptr->next;
    }
   temp->next=NULL;
   delete(ptr);
  }
}
//Insertion At The Specified Position
void insertPos(int t,int pos)
{
 node*ptr,*temp=start;
 ptr=new node;
 ptr->info=t;
 ptr->next=NULL;
 for(int i=1;i<pos-1;i++)
 {
  temp=temp->next;
 }
 ptr->next=temp->next;
 temp->next=ptr;

}
//Deletion Of Node At Any Specified Position
void deletePos(int t)
{
 node*ptr,*temp=start;
 if(start==NULL)
  cout<<"\nList Is Empty";
 else
  {
    for(int i=1;i<=(t-1);i++)
    {
     ptr=temp;
     temp=temp->next;
    }
    ptr->next=temp->next;
    delete(temp);

  }
}
//Counting the nodes
void countNode()
{
 int count=1;
 node*ptr=start;
 if(start==NULL)
  cout<<"\nNo Node Is Present";
 else
  {
   while(ptr->next!=NULL)
    {
      count++;
      ptr=ptr->next;
    }
   cout<<"\nNumber Of Nodes Present:"<<count;

  }

 getch();
}
