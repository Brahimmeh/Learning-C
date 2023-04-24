#include<stdio.h>
main()
{ 
int n,i,t[100],val;



do{ printf("entrer la taille effective :\n");
      scanf("%d" ,&n);
}while(n<1 || n>100);


for(i=0;i<n;i++)
{ printf("entrer  T[%d] = \n",i);
  scanf("%d" ,&t[i]);
}

printf("entrer la valeur :\n");
scanf("%d" ,&val);

for(i=n;((i>=0)&&(t[i-1]>val));i--)
t[i]=t[i-1];

t[i]=val;

printf("le nouveau tableau est : \n");

for(i=0;i<=n;i++)
printf("T[%d] = %d \n" ,i,t[i]);
}
