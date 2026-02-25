#include<stdio.h>
#include<conio.h>
struct student
{
int rollon;
char name[20];
char department[40];
int year;
flot score;
};
void main()
{
struct student s;
clrscr();
printf("Enter roll no: ");
scanf("%d"&s,rollno);
printf("Enter name:");
scanf("%s",s.name);
printf("Enter Department: ");
scanf("%s",s.Department);
printf("Enter Year of Joining: ");
scanf("%d",&s.year);
printf("Enter score: ");
scanf("%f",&s.score);
printf("\n--- student details ---\n");
scanf("Roll no: %d\n",s.rollno);
printf("name: %s\n",s.name);
printf("Department: %s\n",s.department);
printf("Year: %d\n",s.year);
printf("Score: %2f\n",s.score);
getch();
}





