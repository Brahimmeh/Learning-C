#include <stdio.h>

int main()
{
 char A[50],c,*pt;
 int cpt,cpt1;
 cpt=cpt1=0;
 printf( "Enter la chaine de character: \n");
 gets(A);
 pt=A;
 while(*pt!='\0')
 { if(*pt==' ')
    cpt1++;
  
   cpt++; pt++;
 }
 
printf("la longeur de la chaine est : %d \nle nombre d'espaces est : %d \n" ,cpt,cpt1);
for(pt=A;pt<cpt+A;pt++){
 printf("le code ASCII de %c  est %d \n" ,*pt, int(*pt));	
}
 
 return 0;
}
