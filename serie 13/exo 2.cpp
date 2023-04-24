#include<stdio.h>
#include<string.h>

int main()
{ char ch[50],sh[50];
 int x,y,i,j;
   
   
   printf("entrer la chaine :\n");
   gets(ch);
   printf("entrer x et y :\n");
   scanf("%d%d" ,&x,&y);
   
   for(i=x,j=0;(i<=strlen(ch)&&j<y);i++,j++)
   
   {
   	  sh[j]=ch[i];
   }
   sh[j]='\0';
   puts(sh);
}
