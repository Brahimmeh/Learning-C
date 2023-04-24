#include<stdio.h>
main(){ 
 
 int a,b,i=1,som1=0,som2=0;

 while(i<=3)
 {   do { printf("entrer les nombres des doigts de A:");
          scanf("%d" ,&a);
          printf("entrer les nombres des doigts de B:\n");
          scanf("%d" ,&b);
          if (a<1 || a>5 || b<1 || b>5)
		  printf("entrer un nombre de 1 a 5\n");
		  else {
		  if(a>=1 && a<=5)
		  som1+=a;
		  if(b>=1 && b<=5)
		  som2+=b;}
		  
 }while (a<1 || a>5 || b<1 || b>5);
 i++; 
 }
 
 if (som1>som2)
 printf("A gagne");
 if (som1<som2)
 printf("B gagne");
 if (som1==som2)
 printf("nul");}
