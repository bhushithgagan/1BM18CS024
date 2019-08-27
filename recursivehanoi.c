#include<stdio.h>
void towhan(int n,char src,char temp,char dest)
{
if(n==1)
{
printf("Move %d disc from %c to %c \n",n,src,dest);
return;
}
towhan(n-1,src,dest,temp);
printf("Move %d disc from %c to %c \n",n,src,dest);
towhan(n-1,temp,src,dest);
}
void main()
{
int n,t;
char src='a',temp='c',dest='b';  //src,temp and dest are the towers used of which src is source and dest is destnation tower resp
printf("Enter the number of discs\n");
scanf("%d",&n);
//printf("Enter the source tower and destination tower\n");
//scanf("%c %c",&src,&dest); 
towhan(n,src,temp,dest);
printf("Discs moved from source to destination\n");
}
