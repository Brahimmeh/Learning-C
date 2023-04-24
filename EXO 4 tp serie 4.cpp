#include<stdio.h>
  //EXERCICE 4
main(){
	 
	float pT,pU,pHT,TVA,cons,ai,ni;
	
	printf(" Entrez L'ancien index:",ai);
	scanf("%f",&ai);	
	printf("Entrez le Nouvel index:",ni);
	scanf("%f",&ni);
	printf("entrez le  prix unitaire:");
	scanf("%f",&pU);
	printf("_____________________________________________________\n");
	 if(ni<ai){
	 printf("Le nouveau index est invalide!");
	 }else{
  cons=ni-ai;
  pHT=cons*pU;
  TVA=pU/0.1;
  pT=TVA+pHT;
  
	printf("L'ancien index:%.1f Kw\n",ai);
	printf("Nouvel index:%.1f Kw\n",ni);
    printf("Consommation: %.1f Kw\n",cons);
	printf("PrixHT : %.2f DH\n",pHT);
    printf("TVA 10 pour cent : %.2f DH\n",TVA);
    printf("Total a payer:%.1f DH",pT);
}	 }
