#include<stdio.h>
int main(){
	
	int T[100],V[100],Y[100],i,j,ok=0,cmpt,k,N,h;
	
		
	do{
		printf("N=");
		scanf("%d",&N);
	}while(N<1||N>50);
	

	for(i=0;i<N;i++)
	{
      printf("T[%d]= ",i); scanf("%d",&T[i]);
     

	}
	
	V[0]=T[0];k=1;
	for(i=0;i<N;i++)
	{ ok=0;
	   for(j=0;j<k;j++)
	   { if (T[i]==V[j])
	     ok=1;
	   }
	   
	   if (ok==0)
	   { V[k]=T[i];
	    k++;
	   }
	}
	
	
	for(i=0;i<k;i++)
	{ cmpt=0;
	   for(j=0;j<N;j++)
	   { if(T[j]==V[i])
	   
	   { Y[cmpt]=j;
	     cmpt++;
	    
	   }}
	   
	   printf("\n l'element %d appru %d fois \n" ,V[i],cmpt);
	   printf("les indices sont \n");
	   
	   for (h=0;h<cmpt;h++)
	   printf("%d ",Y[h]);
	}
	
	
}
