#include<stdio.h>
struct stud{
        int id;
        int age;
        int marks;
       }s[10];
int main()
{
   int val,i,n;
   printf("Enter the number of students\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    printf("Enter the student details - id, age and marks\n");
    scanf("%d %d %d",&s[i].id,&s[i].age,&s[i].marks);
     if(s[i].age>=20 && s[i].marks>0 && s[i].marks<=100)
      {
          printf("Valid info\n");
          val=1;
      }
     else 
      {
          printf("InValid Info\n"); 
          val=0;
           
      }
     
     if (val==1)
      {
       if(s[i].marks>=65 && s[i].marks<=100)
        printf("Student %d is ELIGIBLE\n",i+1);
       else
        printf("Student %d is INELIGIBLE\n",i+1);
      }
       
      
   }
 return 0;
}