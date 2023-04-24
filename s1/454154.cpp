#include<stdio.h>
main()
{ int i,j,n,k;

do { printf("entrer n:");
     scanf("%d" ,&n);
     
}while(n<=0);


for (i=1;i<=n;i++)
{ if(i==1 || i==n)

 { for(j=1;j<=n;j++)
   {printf("*");}}
   
 
 else { printf("*");
       for(k=1;k<=n-2;k++)
       printf(" ");
       printf("*");}
      printf("\n"); 
       
}
}
