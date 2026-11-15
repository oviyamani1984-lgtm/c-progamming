#include<stdio.h>
#include<stdio.h>

void main(int argc,char*argv[])
{
 int m1,m2,m3,m4,m5,total;
 float average;
 char name[100];
 if(argc!=7)
 {
 printf("invalid marks\n");
 }
 strcpy(name,argv[1]);
 m1=atoi (argv[2]);
 m2=atoi (argv[3]);
 m3=atoi (argv[4]);
 m4=atoi (argv[5]);
 m5=atoi (argv[6]);


 total=m1+m2+m3+m4+m5;
 average=total/5.0;
 printf("------student report-----");
 printf("student name:%s\n",name);
 printf("mark1:%d\n",m1);
 printf("mark2:%d\n",m2);
 printf("mark3:%d\n",m3);
 printf("mark4:%d\n",m4);
 printf("mark5:%d\n",m5);
 printf("total:%d\n",total);
 printf("average:%.2f\n",average);

 if(total>=450)
 {
 printf("grade 'A'");
 }
 else if(total>=350)
 {
 printf("grade B");
 }
 else if(total>=300)
 {
 printf("grade C");
 }
 else if(total>=200)
 {
 printf("grade D");
 }
 else
 {
 printf("FAIL");
 }
  }




