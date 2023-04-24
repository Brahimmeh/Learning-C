#include<stdio.h>
main()
{ int n,i,j,m,p;
 do
 { printf("saisir n et m:");
  scanf("%d%d" ,&n,&m);
   
 }while(n<1 || m<1);
 
 for(j=1;j<=m;j++)
 
 { for(i=1;i<=n;i++)
 
  { p=i*j;

  printf("%d * %d = %d\t" ,i,j,p);}
  printf("\n");
 }
}
