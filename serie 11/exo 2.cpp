#include<stdio.h>
main()
{ 
int n,i,t[100],x,cpt=0,j,a;

do{ printf("entrer la taille effective :\n");
      scanf("%d" ,&n);
}while(n<1 || n>100);


for(i=0;i<n;i++)
{ printf("entrer  T[%d] = \n",i);
  scanf("%d" ,&t[i]);
  
}

printf("entrer la valeur :\n");
scanf("%d" ,&x);
for(i=0;i<n;i++)
{
if (t[i]==x)
  cpt++;}
  
for(i=0;i<n-cpt;i++)
{ if(t[i]==x)
 { 
	for (j=i;j<n-1;j++)
       t[j]=t[j+1];

}}
printf("le nouveau tableau est : \n");
for(i=0;i<n-cpt;i++)
printf("T[%d] = %d \n" ,i,t[i]);

}

