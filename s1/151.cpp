#include<stdio.h>
main()
{  
   int n,a,b,cpt=0,i,j,s=0,cpt2=0,som=0;
   
   do  {
   	
   	      som=0;
		  printf("Entrez n:");
   	      scanf("%d" ,&n);
   	     for (j=1;j<=n-1;j++)
    { if(n%j==0)
      som+=j;
      
	}
	
	if (n<som)
	printf("Abondant \n");
	if(n>som)
	printf("Deficient \n" );
	if(n==som)
	printf("Parfait \n");
	 
   	      
   }while (n<120000);
   
   
	
  }
  
