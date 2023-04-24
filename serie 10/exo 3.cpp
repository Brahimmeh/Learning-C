#include<stdio.h>
main()
{ 
int n,i,t[100],j,a[100],cpt,l;

do{ printf("entrer la taille effective :\n");
      scanf("%d" ,&n);
}while(n<1 || n>100);


for(i=0;i<n;i++)
{ printf("entrer  T[%d] = \n",i);
  scanf("%d" ,&t[i]);
  
}

printf("\n ===== traitement des elements ====== \n \n");
for(i=0;i<n;i++){

   
    { for(j=0;j<n;j++)
      
       { if(t[j]==t[i])
         { cpt++;
           
           printf(" %d apparu a l indice %d \n" ,t[i],j );
		 }
	   }
	   
	   }
	   printf("le nombre d'apparition est %d \n \n" ,cpt);
	   
	   cpt=0;
	   
	}

}


