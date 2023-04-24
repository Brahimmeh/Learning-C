//calculer les nombres des pieces de 10 et 5dh d une somme//
#include<stdio.h>
main()
{ int p1,p2,reste,somme;
printf("veuillez entrer la somme en dirham:");
scanf ("%d" ,&somme);
p1=somme/10;
reste=somme%10;
p2=reste/5;
printf(" le nombre de pcs de 10dh est:%d et de 5dh est:%d" ,p1,p2);
}
