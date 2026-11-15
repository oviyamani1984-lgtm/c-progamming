#include<stdio.h>
struct student

{
 char name[50];
 int rollno;
 int mark;
 char city[50];
 char dream[50];

};
void read(struct student s[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("\nEnter student%ddetails\n",i+1);

  printf("name:");
  scanf("%s",s[i].name);

  printf("roll number:");
  scanf("%d",&s[i].rollno);

  printf("mark:");
  scanf("%f",s[i].mark);

  printf("city:");
  scanf("%s",s[i].city);

  printf("dream:");
  scanf("%s",s[i].dream);
  }
 }
 void write(struct student s[],int n)
 {
  int i;

  for(i=0;i<n;i++)
  {
   printf("\nstudent %d details\n",i+1);
   printf("name:%s\n",s[i].name)
   printf("roll Number:%d\n",s[i].rollno);
   printf("mark:2f\n",s[i].mark);
   printf("city:%s\n",s[i].city);
   printf("dream:%s\n",s[i].dream);
   }
 }
  int main()
  {
   struct student s[100];
   int n;

   printf("enetr number of student:");
   scanf("%d",&n) ;

   if(n<1||n>100)
   {
    printf("invalid number of student!\n");
    return 1;
   }
   read(s,n)
   write(s,n)

   return 0;
 }


