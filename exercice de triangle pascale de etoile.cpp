#include<stdio.h>
 
main(){
  int i,a, j,nbr,esp;    // Indices de boucle
  printf("Entrez le nombre de lignes du triangle à afficher : ");
  scanf("%d", &nbr);
 
  // Traitement d'une ligne

  for (i=1; i<=nbr; i++)
  { for(esp = 1; esp <= nbr-i; esp++)
        printf("  "); //ajouter l'espace
        for(esp = i; esp>1; esp--)
        printf(" ");
    
    for(j=1; j<=i; j++) 
{      
		printf("*");
		
		for(a=1; a<j;a=i)
	{printf("*");
	 
}
	}printf("\n");
}
 
}
