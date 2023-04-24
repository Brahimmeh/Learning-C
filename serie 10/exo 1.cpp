#include<stdio.h>
//methode bulle//
main()
{ int T[100],n,i,j,a,k;
 do{ printf("entrer la taille effective : \n");
     scanf("%d" ,&n);
 }while(n<1 || n>100);
 
 for(i=0;i<n;i++){
 printf("entrer T[%d] \n" ,i);
scanf("%d" ,&T[i]);}
do{
k=0;
 for(i=0;i<n-1;i++)
 { 
 
 
 if(T[i]<T[i+1])
 
 
   {
	 a=T[i];
	 T[i]=T[i+1];
	 T[i+1]=a;
	 k++;
 }
   

}
}while(k!=0);
for(i=0;i<n;i++)
printf("%4d" ,T[i]);}
