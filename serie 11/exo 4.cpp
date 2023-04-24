#include<stdio.h>
main()
{ 
int i,A[100],j,B[100],FUS[100],IA,IB,IFUS,n1,n2,k,n;

do{ printf("entrer la taille effective du 1 er tableau :\n");
      scanf("%d" ,&n1);
      printf("entrer la taille effective du 2 eme tableau :\n");
      scanf("%d" ,&n2);
}while(n1<1 || n1>100 || n2<1 || n2>100);


for(i=0;i<n1;i++)
{ printf("entrer  B[%d] = \n",i);
  scanf("%d" ,&B[i]);
}

for(i=0;i<n2;i++)
{ printf("entrer  A[%d] = \n",i);
  scanf("%d" ,&A[i]);
}
//classemet du tableau B en ordre croissant//
do{ 
k=0;
for (i=0;i<n1;i++)
if(B[i]>B[i+1]){

 
   { n=B[i];
   B[i]=B[i+1];
   B[i+1]=n;
   k++;
     }
 
 
}}while(k!=0);

//classement du tableau A en ordre croissant//

do{ 
k=0;
for (i=0;i<n2;i++)
if(A[i]>A[i+1])

 {
 
   { n=A[i];
   A[i]=A[i+1];
   A[i+1]=n;
   k++;}
     
 
 }}while(k!=0);
//classement et traitement  du tableau FUS en ordre croissant//

IB=IA=IFUS=0;

while(IA<n1 && IB<n2)
{ while (A[IA]<B[IB])
  { FUS[IFUS]=A[IA];
    IA++; 
	IFUS++;  
	if(IA>=n1)
	break;  }
    
   while (A[IA]>B[IB]) 
    { FUS[IFUS]=B[IB];
    IB++;   IFUS++; 
	if(IB>=n2)
	break ; }
    
   while (A[IA]==B[IB])   
   { FUS[IFUS]=A[IA];
     IA++;IFUS++;
     FUS[IFUS]=B[IB];
     IFUS++;IB++;
     if(IA>=n1 || IB>=n2)
     break;
   }
}

if(IA>=n1)
{ 
     for(j=IB;j<n2;j++)
     { FUS[IFUS]=B[j];
      IFUS++;
   } 
}

else
{ 
    for(j=IA;j<n1;j++)
     { FUS[IFUS]=A[j];
      IFUS++;
   }
}

//Affichage du tableau FUS//
printf("\n le nouveau tableau FUS est : \n");
for (i=0;i<IFUS;i++)
printf("%d \n" ,FUS[i]);}



