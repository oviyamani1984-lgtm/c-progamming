#include<stdio.h>
int main(){
FILE*fp;

fp=fopen("feedback.txt","w");
if(fp==NULL){
printf("invalid file\n");
return 0;
}
 fprintf(fp,"feedback of c programming\n");
 fprintf(fp,"1.it iis very difficult for meto learn\n");
 fprintf(fp,"2.generally learning complete c programming takes 6 months.but you forcing us to complete it in 3 months\n");
 fprintf(fp,"3.now i unterstant c programming language.but i also have some doubts\n");
 fprintf(fp,"4.it is intersting to learn\n");
 fprintf(fp,"5.this c programming classes are okay for me\n");
 fclose(fp);
 fp=fopen("feedback.text","a");
 if(fp==NULL){
 printf("file cannot be opend\n");
 return 0;
 }
 fprintf(fp,"c-sir feedback\n");
 fprintf(fp,"1.he teach well\n");
 fprintf(fp,"2. he is frinendly to everyone\n");
 fprintf(fp,"3.he is clear my doubt clearly\n");
 fprintf(fp,"4. he push us to train leetcode and github project\n");
 fprintf(fp,"5. he is a good sir\n");
 fclose(fp);
 {
  char buffer[1000];
  fp=fopen("feedback.txt","r");
  if(fp==NULL)
  {
  printf("file cannot be opened\n");
  return 0;
  }
  while (fgets(buffer,sizeof(buffer),fp)!=NULL)
  {
  printf("%s",buffer);
  }
  fclose(fp);
  return 0;
  }
  }


