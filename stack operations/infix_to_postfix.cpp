/*
conversion of infix to postfix with the help of stack in STL...
By Chitranjali Banjare
*/
#include<iostream>
#include<stack>
#include<cstring>

using namespace std;
int priority(char ch)
{
	switch(ch)
	{
		case '^': return 5;
		case '(': return 0;
		case '*' : return 4;
		case '/':  return 4;
		case '+':  return 3;
		case '-': return 3;
	}
}
void convert(char st[])
{
	stack<char> stk;
	char str[strlen(st)+8];char ch;
	int j=0;
	for(int i=0;i<strlen(st);i++)
	{
		if(st[i]=='(')
		{
			stk.push('(');
		}
		else
		if(st[i]==')')
		{
			while(!stk.empty() && stk.top()!='(')
			{
				str[j++] = stk.top();
				stk.pop();	
			}
			if(stk.top() =='(')
			stk.pop();
		}
		else
		{
		
		if(st[i]=='*' || st[i]=='/' || st[i]=='+' || st[i]=='-' || st[i]=='^')
		{
			while(!stk.empty() && (priority(stk.top())>= priority(st[i]) ))
			{
				str[j++]=stk.top();
				stk.pop();
			}
			stk.push(st[i]);
		}
		else
		 str[j++]=st[i];
	}
	}
	while(!stk.empty())
	{
		str[j++]=stk.top();
		stk.pop();
	}
	str[j]='\0';
	cout<<str;

}

int main()
{

	char exp[1000];
	char *post;
	cout<<"enter the expression:\n";
	scanf("%s",exp);
	 convert(exp);
	
}

