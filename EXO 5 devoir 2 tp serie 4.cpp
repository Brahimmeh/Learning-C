#include<stdio.h>
  //EXERCICE 5
main(){
	 
	float pT,pU,pHT,TVA,cons,ai,ni,cons1,pHT1,TVA1;
	
	printf(" Entrez L'ancien index:",ai);
	scanf("%f",&ai);	
	printf("Entrez le Nouvel index:",ni);
	scanf("%f",&ni);
	printf("_____________________________________________________\n");
	 if(ni<ai)
	 printf("Le nouveau index est invalide!");
	 else{
  cons=ni-ai;
  if (cons<=100)
 {pHT=cons*0.6;
  TVA=pHT*0.1;
  pT=TVA+pHT;}
  else
  { pHT=100*0.6;
  TVA=pHT*0.1;
  cons1=cons-100;
  pHT1=cons1*0.9;
  TVA1=pHT1*0.1;
  pT=pHT+pHT1+TVA+TVA1;
  }
	printf("L'ancien index:%.1f Kw\n",ai);
	printf("Nouvel index:%.1f Kw\n",ni);
    printf("Consommation: %.1f Kw\n",cons);
	printf("PrixHT : %.2f DH\n",pHT+pHT1);
    printf("TVA 10 pour cent : %.2f DH\n",TVA+TVA1);
    printf("Total a payer:%.1f DH",pT);
}	 }
