#include<stdio.h>
main()
{ int t[100],I[100],n,i,x,k,j;

do { printf("entrer un dimension effective :");
     scanf("%d" ,&n);
}while(n<1 || n>100);

for(i=0;i<n;i++)
{ printf("entrer T[%d] : \n" ,i);
  scanf("%d",&t[i]);
  }
  
  printf("entrer x :\n");
  scanf("%d" ,&x);
j=k=0;  
  for(i=0;i<n;i++)
{ if(t[i]==x)
  {  I[j]=i;
     j++;
     k++;
  }
}

printf("le nombre d'apparition est : %d\n" ,k);
printf("les indices sont :\n");

for(i=0;i<j;i++)
printf("%d se trouve dans la case de l'indice %d \n" ,x,I[i]);}

