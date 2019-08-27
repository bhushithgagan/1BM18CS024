#include<stdio.h>
int fib(int n);
int main()
{
int n,f;	
printf("Enter the Value of n\n");
scanf("%d",&n);
f=fib(n);
printf("%d\n",f);
}
int fib(int n)
{
if(n==1)
return 0;
if(n==0)
return 1;
return(fib(n-1)+fib(n-2));
}
