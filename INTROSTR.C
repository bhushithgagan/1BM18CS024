 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 struct stud {
 char name[20];
 float ld,mp,dm,carch,coi,java;
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
printf("\nEntered marks\n");
printf("LD=%f MP=%f DM=%f Computer Architechture=%f Const of India=%f Java=%f",s.ld,s.mp,s.dm,s.carch,s.coi,s.java);
getch();
}