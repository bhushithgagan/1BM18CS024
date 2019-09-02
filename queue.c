# define size 10
#include<stdio.h>
void insert(int ele,int *r,int q[])
{
    if(*r==size-1)
    {
        printf("Queue Overflow\n");
        return;
    }
    *r=*r+1;
    q[*r]=ele;
}
int delete(int q[],int *f,int *r)
{
    int ele;
    if(*f>*r)
    {
        printf("Queue underflow\n");
        return -999;
    }
    ele = q[*f];
    *f = *f + 1;
    return ele;
}
void display(int q[],int f,int r)
{
    int i;
    if(f>r)
    {
        printf("Queue empty\n");
        return;
    }
    printf("Contents of queue are\n");
    for(i=f;i<r;i++)
    {
        printf("%d",q[i]);
    }
}
int main()
{
    int f=0,r=-1,q[size],ele,i;
    int c,c1;
    do{
        printf("*** Enter your choice ***\n");
        printf("\n1 to Insert \n 2 to delete \n 3 to display\n");
        scanf("%d",&c);
        switch (c)
        {

        case 1: printf("\nEnter the element\n");
                scanf("%d",&ele);
                insert(ele,&r,q);
                 break;

        case 2: delete(q,&f,&r);
                 break;

        case 3: display(q,f,r);
                 break;

        default: printf("\n *** Invalid Entry ***\n");
            
        }
        printf("\nDo you want to continue?\n");
        printf("Enter 1 for yes and 0 for NO\n");
        scanf("%d",&c1);
    } while(c1!=0);
}