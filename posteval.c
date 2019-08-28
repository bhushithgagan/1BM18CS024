#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void push(int s[],int *t,int a)
{
  if(*t == 19)
  {
    printf("Stack overflow \n");
  }
  s[++(*t)] = a;
}
int pop(int s[],int *t)
{
  if(*t == -1)
  {
    printf("Stack underflow \n");
    return 0;
  }
  return s[(*t)--];
}
int res(int a, int b, char c)
{
   switch(c)
   {
     case '+': return (a+b);
     case '-': return (a-b);
     case '*': return (a*b);
     case '/': return (a/b);
    
   }
}
int main()
{
  int s[20],top,i,value,op1,op2,an,x;
  char post[50];top=-1;i=0;
  printf("Enter the postfix expression \n");
  scanf("%s",post);
  while(post[i] != '\0')
  {
    if(isdigit(post[i]))
      { 
        x = (int)post[i] - 48;
        push(s, &top, x);
        }
    else
    {
      op2 = pop(s,&top);
      op1 = pop(s,&top);
      value = res(op1,op2,post[i]);
      push(s, &top, value);
    }
    i++;
  }
  an = pop(s,&top);
  printf("ANSWER = %d \n",an);
  return 1;
}
  