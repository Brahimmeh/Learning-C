#include <stdio.h>

int main()
{ 
  int i,n,m,A[50],B[50],*pt1,*pt2;
  
  do{
  	printf("entrer la taille effective du tableau A : \n");
  	scanf("%d" ,&n);
  	printf("entrer la taille effective du tableau B : \n");
  	scanf("%d" ,&m);
  }while(n<1 || m<1 || n>50 || m>50);
  
  for(pt1=A;pt1<A+n;pt1++)
  {
 printf("entrer l'element %d du A : \n",pt1-A);
 scanf("%d" ,pt1);}
 
 for(pt2=B;pt2<B+m;pt2++)
  {
 printf("entrer l'element %d du B : \n",pt2-B);
 scanf("%d" ,pt2);}
 
 for(pt1=A+n,pt2=B;pt1<A+n+m;pt1++,pt2++)
  {
  	*pt1=*pt2;
 }
 
 //affichage//
 for(pt1=A;pt1<A+n+m;pt1++)
  {
 printf("A[%d]= %d \n",pt1-A,*pt1);
 }
 
 for(pt2=B;pt2<B+m;pt2++)
  {
 printf("B[%d]= %d \n",pt2-B,*pt2);}
   
 

}
