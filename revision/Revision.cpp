#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct DN{ int jr,m,a;};
typedef struct Etudiant {
	
struct DN etu;
char Nom[30],Pre[30];
char  iden[30];
float NE;
	
}s_Etudiant;

int main(){
	s_Etudiant T[30],AIDE;
	int i,n,imn,min,l,j;
	char ch1[30];
	
do{ printf("entrer le nombre d'etudiants (max=30) \n");
    scanf("%d" ,&n);
}while(n<0 || n>30);
//remplissage//
for(i=0;i<n;i++)
{ printf("entrer le nom d'etudiant %d \n" ,i+1);
fflush(stdin);
gets(T[i].Nom);
printf("entrer le prenom d'etudiant %d \n" ,i+1);
gets(T[i].Pre);
printf("entrer l'identifiant d'etudiant %d \n" ,i+1);
gets(T[i].iden);
printf("entrer la date de naissance d'etudiant %d (jj/mm/aa) veuillez separer les nombres avec des '/'\n" ,i+1);
scanf("%d/%d/%d",&T[i].etu.jr,&T[i].etu.m,&T[i].etu.a);
printf("entrer la note d'examen d'etudiant %d \n" ,i+1);
scanf("%f" ,&T[i].NE);
}
//suppression//
printf("entrer l'identifiant d'etudiant a supprime : \n");
fflush(stdin);
gets(ch1);
for(i=0;i<n;i++)
{ if(strcmp(ch1,T[i].iden)==0)
  { for(j=i;j<n-1;j++)
    {
     T[j]=T[j+1];
   }
	n--;
  }
  else
  {printf("l'identifiant n'existe pas dans le tableau \n");
  }
}
//recherche du min//
for(i=0,min=T[0].NE;i<n;i++)
{ if(min>=T[i].NE){

       min=T[i].NE;
           imn=i;}
}

/*traitement par ordre croissants*/
imn=0;
for(i=0;i<n;i++)
{ 
   min=T[i+1].NE;
   
   for(l=i+1;l<n;l++)
   { if( T[l].NE<= min)
      { min=T[l].NE;
        imn=l;
        
	  }
   }
   
   if(min < T[i].NE)
   { 
     AIDE=T[i];
     T[i]=T[imn];
     T[imn]=AIDE;
   }
   
}

//affichage du tableau trie//
printf("le nouveau tableu trie par orde croissant est : \n");
printf("Matricule        | Nom et prenom                | date de naissance          | Note Exam          \n");
for(i=0;i<n;i++)
{printf("%s              | %s %s             | %d/%d/%d                   | %.2f                \n",T[i].iden,
T[i].Nom,T[i].Pre,T[i].etu.jr,T[i].etu.m,T[i].etu.a,T[i].NE);
}}
