//problem no.3 of lab 3

#include<stdio.h>
int main()

{ 
int a,gradept[6],cred[6],i,gradesum=0,credsum=0;
double gpa;

printf("Enter grade point first and then enter credit for that subject:\n");
printf("grade point  credit\n");

for(i=0;i<6;i++)
   scanf("%d %d",&gradept[i],&cred[i]);

for(i=0;i<6;i++)
    {
      gradesum+=(gradept[i]*cred[i]);
     credsum+=cred[i];
    }

gpa=((float)gradesum)/credsum;
printf("gpa is %.2lf\n",gpa);
 
return 0;
}
