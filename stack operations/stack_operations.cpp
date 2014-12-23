/*
By Chitranjali Banjare
*/
#include<iostream>
using namespace std;
#define MAX 10000

void push(int stack[],int n,int &top)
{
	if(++top<MAX)
	stack[top]= n;
	else
	cout<<"Overflow!!\n";
	return;
}

void pop(int &top)
{
	if(top==-1)
	cout<<"stack is empty\n";
	else
	{
		top--;
		cout<<"elemet poped \n";
	}
}

int topmost(int stack[], int top)
{
	if(top>-1)
	return stack[top];
	else
	{
		cout<<"stack is empty\n";
		exit(1);
	}
}

void display(int stack[], int top)
{
	cout<<"Displaying from top..\n";
	for(int i=top;i>=0;i--)
	cout<<stack[i]<<" ";
	cout<<endl;
	return;
}

int main()
{
	int c,n,top=-1;
	int stack[MAX];
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
					push(stack,n, top);
					break; 
		case 2 :  pop(top);
					break;
		case 3 :  cout<<topmost(stack,top)<<endl;
					break;
		case 4 :  display(stack,top);
					break;
		case 5 : exit(1);
		default : break;
	}
	
}
return 0;	
}
