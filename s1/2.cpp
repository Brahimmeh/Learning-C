#include<stdio.h>
main(){ 
 
 int a,b,i,j,esp;
 
 do { printf("enter a:");
     scanf("%d" ,&a);
     
     if (a<=0 || a%2!=0)
     printf("entrer un nombre positif et paire\n");
 }while(a<=0 || a%2!=0);

 b=a/2;
 
for (i=1;i<=b;i++)
{  for (esp=b;esp>=i;esp--)
   printf("  ");
   for(j=1;j<=i;j++)
   printf("%d " ,j);
   
   printf("\n");
}

for (i=b;i>=1;i--)
{  for(esp=1;esp<=b;esp++)
   printf("  ");
   for(j=i;j>=1;j--)
   printf("%d " ,j);
   
   printf("\n");
}}
