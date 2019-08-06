 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 struct stud {
 char name[20];
 float ld,mp,dm,carch,coi,java,ds;
 }s;  clrscr();
 printf("Enter the student name:");
 scanf("%s",&s.name);
printf("Enter the student marks\n");
printf("\nLD");
scanf("%f",&s.ld);
printf("\nMP");
scanf("%f",&s.mp);
printf("\nDM");
scanf("%f",&s.dm);
printf("\nComputer Architecture");
scanf("%f",&s.carch);
printf("\n Const of India");
scanf("%f",&s.coi);
printf("\njava");
scanf("%f",&s.java);
printf("\n Data Structures");
scanf("%f",&s.ds);  
printf("\nEntered marks\n");
printf("LD=%f MP=%f DM=%f Computer Architechture=%f Const of India=%f Java=%f Data Structures=%f",s.ld,s.mp,s.dm,s.carch,s.coi,s.java,s.ds);
if(ld>=90 && ld<=100)
gr1=10;
else if(ld>=75 && ld<90)
gr1=9;
else if(ld>=60 && ld<75)
gr1=8;
else if(ld>=50 && ld<60)
gr1=7;
else if(ld>=40 && ld<50)
gr1=6;
else
printf("Fail");
//under development
