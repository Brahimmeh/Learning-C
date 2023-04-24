#include<stdio.h>
main()
{ 
int i,A[100],P[100],IMPA[100],IP,IMP,n;

do{ printf("entrer la taille effective :\n");
      scanf("%d" ,&n);
    
}while(n<1 || n>100 );

IP=IMP=0;

for(i=0;i<n;i++)
{ printf("entrer  A[%d] = \n",i);
  scanf("%d" ,&A[i]);
  if(A[i] %2 ==0)
  { P[IP]=A[i];
    IP++;
  }
  
   else
  { IMPA[IMP]=A[i];
    IMP++;
  }
}
printf("le tableau paire est : { ");
for(i=0;i<IP;i++)
{ printf(" %d,",P[i]);
}
printf(" }; \nle tableau impaire est : { ");
for(i=0;i<IMP;i++)
{ printf(" %d,",IMPA[i]);
}
printf(" }; \n === Fin du traiement ====  ");}
