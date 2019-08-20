#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
void push (char c[10],int *t)
{
if (*t==9)
{
printf("Stack overflow\n");
exit(0);
}
*t=*t+1;

}
void pop (char c[10],int *t)
{
if(*t==-1)
{
printf("Stack underflow\n");
return;
}
*t=*t-1;
}
void intopo (char infix[], char postfix[])
{
int i,j;
char ele;
char x;
push('(');
strcat( infix,')');
i=0;
j=0;
ele=infix[i];
while(ele!='\')
{
if(ele=='(')
{
push(ele);
}
else if(isdigit(ele) || isalpha(ele))
{
postfix[j]=ele;
j++;
}
else if(isoperator(ele)==1)
{
x=pop();
while(isoperator(ele)==1 && precedence(x)>=precedence(ele))
{
postfix[j]=x;
j++;
X=pop();
}
push(x);
push(ele);
}
else if(item==')')
{
X=pop();
while(x!='(')
{
postfix[j]=x;
j++;
x=pop();
}
}
ele
{
printf("\n Invalid infix expression \n");
getchar();
exit(0);
}
i++;
ele=infix[i];
}
if (top>0)
{

