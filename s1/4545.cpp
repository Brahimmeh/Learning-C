#include<stdio.h>
main()
{ int n,nb,nb2,i=1,h=0,cpt=0;

do{ printf("entrer le nombre des nombres entiers:\n");
    scanf("%d" ,&n);
}while(n<=0);

printf("entrer le premier nombre:\n");
scanf("%d" ,&nb);

do{ printf("entrer le nombre suivant:\n");
    scanf("%d" ,&nb2);
    if(nb<nb2)
   {
	h++;}
	else h=0;
	if(nb<nb2 && h==2)
	cpt++;
	nb=nb2;
	i++;


}while(i<n);

if (cpt==0)
printf("non \n");
else
printf("oui \n");}
