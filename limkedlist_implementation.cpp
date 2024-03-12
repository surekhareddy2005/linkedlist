#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head;
	head=0;
	struct node *newnode,*temp;
	int count=1;
	while(count!=0)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	}
	printf("do you want to continue");
	scanf("%d",&count);
}
temp=head;
while(temp!=0)
{
	printf("%d  ",temp->data);
	temp=temp->next;
}	
}
struct node* create_node(int data);
{
	struct node*newnode;
	newnode->data=data;
	newnode->next=0;
	return newnode;
}
void construct_node(struct node *head)
{
	struct node*temp=0;
	if(head==0)
	{
		head=temp=create_node(newnode);
	}
	else
	{
		temp->next=create_node(newnode);
		temp=create_node(newnode);
	}
}
	void print(struct node*head)
	{
		struct node*temp=head;
		while(temp!=0)
		{
		printf("%d",temp->next);
		temp=temp->next;
	}
	}
int main()
{
	struct node*head=0,*newnode;
	int c,i;
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{
	 	scanf("%d",data);
	 	newnode=(structnode*)malloc(sizeof(struct node));
	 	create_node(data); 
	 	
	}
}



