#include<stdio.h>
void display(int s[100],int *t);
void push(int ele,int s[100],int *t);
int pop(int s[10], int *t);
int main()
{
	int stack[100],top=-1,x;
	push(1,stack,&top);
	push(2,stack,&top);
	push(3,stack,&top);
	display(stack,&top);
	x=pop(stack,&top);
	if(x!=-999)
		printf("Popped element %d\n",x);
		display(stack, &top);
		return 0;
}

void push (int ele,int s[100],int *t)
{
	if(*t==99)
	{
	printf("Stack Overflow\n");
	return;
	}
	*t=*t+1;
	s[*t]=ele;
}

void display (int s[100],int *t)
{
	int i;
	if(*t==-1)
	{
	printf("Stack underflow\n");
	return;
	}
for(i=*t;i>=0;i--)
printf("%d\n",s[i]);
}

int pop(int s[100],int *t)
{
	int ele;
	if(*t==-1)
	{
	printf("Stack underflow\n");
	return -999;
	}
	ele=s[*t];
	*t=*t-1;
	return ele;
}