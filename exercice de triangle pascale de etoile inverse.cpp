#include<stdio.h>
 
main(){
  int i,a, j,nbr,esp;    // Indices de boucle
  printf("Entrez le nombre de lignes du triangle à afficher : ");
  scanf("%d", &nbr);
 
  // Traitement d'une ligne

  for (i=nbr; i>=1; i--)
  { for(esp =nbr-i;esp>=1; esp--)
        printf("  "); //ajouter l'espace
        for(esp = 1; esp<i; esp++)
        printf(" ");
        if (i==1)
      {printf ("*");  }
    
    for(j=i; j>1; j--) 
{   
		printf("**");
		
		for(a=j; a>=i;a--)
	{printf("*");
	 
}
	}printf("\n");
}
 
}
