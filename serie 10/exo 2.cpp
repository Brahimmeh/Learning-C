#include<stdio.h>
main()
{ int t[100],n,i,max,min,Imx,Imn;

do { printf("entrer un dimension effective :");
     scanf("%d" ,&n);
}while(n<1 || n>100);

for(i=0;i<n;i++)
{ printf("entrer T[%d] : \n" ,i);
  scanf("%d",&t[i]);}
  
  for(i=1,min=max=t[0],Imn=Imx=0;i<n;i++)
{ if(t[i]>max)
 { max=t[i];
  Imx=i;
 }
 
 if(t[i]<min)
 { min=t[i];
  Imn=i;
 }
}
printf("le max est %d son indice est %d \n" ,max,Imx);

printf("le min est %d son indice est %d \n" ,min,Imn);}
