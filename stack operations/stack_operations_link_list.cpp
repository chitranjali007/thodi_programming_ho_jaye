/*
Link List implementation of stack...
one of the important thing to learn from this program is the use of double pointer.
We often get confused that pointer are basically references so they cant be passed by value
but this is not so.. 
firts i tried to pass the pointer as it is. i.e. by value, this method doesnt change the reflect.
so better to pass the pointers by reference and at function definition, double pointer will be
used to capture its adrress...
http://stackoverflow.com/questions/4776010/pass-by-reference-and-value-with-pointers
By Chitranjali Banjare
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
#define MAX 10000

struct list
{
	int info;
	struct list *next;
};

void push(int n,struct list **top)
{
   	struct list * node = (struct list *)malloc(sizeof(struct list));
   	if(node==NULL)
   	cout<<"overflow!!\n";
   	else
	{
		node->info = n;
   		node->next= *top;
	   	*top = node;
	   
 }
}

void pop(struct list **top)
{
	if(*top==NULL)
	cout<<"stack underflow!!\n";
	else
	{
		*top=(*top)->next;
		cout<<"one element poped\n";
	}
}

int topmost(struct list *top)
{
	if(top!=NULL)
	return top->info;
	else
	{
		cout<<"stack is empty\n";
		exit(1);
	}
}

void display(struct list *top)
{
	cout<<"Displaying from top..\n";
	while(top!=NULL)
	{
		cout<<top->info<<" ";
		top=top->next;
	}
	cout<<endl;
}

int main()
{
	int c,n;
	struct list *top=NULL;
while(true)
{   
	cout<<endl;
	cout<<"1.push into stack\n";
	cout<<"2. Pop from stack\n";
	cout<<"3. Display topmost element\n";
	cout<<"4. Display all stack elements\n";
	cout<<"5. exit\n";
	cout<<endl;
	scanf("%d",&c);
	switch(c)
	{
		case 1 : cout<<"Enter the element to push:\n ";
					scanf("%d",&n);
					push(n, &top);
					break; 
		case 2 :  pop(&top);
					break;
		case 3 :  cout<<topmost(top)<<endl;
					break;
		case 4 :  display(top);
					break;
		case 5 : exit(1);
		default : break;
	}
	
}
return 0;	
}
