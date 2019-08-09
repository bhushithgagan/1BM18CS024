#include<stdio.h>
struct stud{
        int id;
        int age;
        int marks;
       }s;
int main()
{
   int val;
   printf("Enter the student details- id, age and marks\n");
   scanf("%d %d %d",&s.id,&s.age,&s.marks);
   if(s.age>=20 && s.marks>0 && s.marks<=100)
      val=1;
   else 
      val=0;   
   if (val==1)
   {
       if(s.marks>=65 && s.marks<=100)
       printf("Student is ELIGIBLE");
       else
       {
         printf("Student is INELIGIBLE");
       }
       
   }
 return 0;
}