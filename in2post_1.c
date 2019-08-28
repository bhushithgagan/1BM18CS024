#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void push(char item,char s[100],int *t) ;
char pop(char s[100],int *t);
int pre(char sym);
int main()
{
	char infix[20],postfix[20],stack[100];
	char item,temp;
	int i=0,t=0;
	int top=-1;
	printf("enter infix expression=\n");
	scanf("%s",infix);
	while(infix[i]!='\0')
	{
		item=infix[i];
		if(item=='(')
		{
			push(item,stack,&top);
		}
		else if(isalnum(item))
		{
			postfix[t]=item;
			t++;
		}
		else if(item==')')
		{
			temp=pop(stack,&top);
			while(temp!='(')
			{
			postfix[t]=temp;
			t++;
			temp=pop(stack,&top);

			}
	       }
		else
		{
			  temp=pop(stack,&top);
			  while(top!=-1&&(temp)>=pre(item))
			  {
				postfix[t]=temp;
				t++;
				temp=pop(stack,&top);
			  }
			  push(temp,stack,&top);
			  push(item,stack,&top);

		}
	       i++;
	}
	while(top!=-1)
	{
		postfix[t]=pop(stack,&top);
		t++;
	}
	postfix[t]='\0';
	printf("postfix exp is\n%s",postfix);
	return 0;
}
void push(char item,char s[100],int *t)
{
	if(*t==99)
	{
		printf("stack overflow");
	}
	*t=*t+1;
	s[*t]=item;
}
char pop(char s[100],int *t)
{
	char item;
	item=s[*t];
	*t=*t-1;
	return item;

}
int pre(char sym)
{
    switch(sym)
    {
	case '^':return 3;
	case '*':
	case '/':return 2;
	case '+':
	case '-':return 1;
	default:return 0;
    }
}