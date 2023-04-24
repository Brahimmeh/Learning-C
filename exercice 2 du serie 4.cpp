#include<stdio.h>
main()
{ int a,b;
printf ("veuillez entrer a et b");
scanf("%d%d" ,&a,&b);
 if (a==0 && b!=0)
{printf("le produit est nulle \n");
printf("la division est nulle \n");
if (b<0)
{printf("l addition est negatif \n");
printf("la soustraction est positif \n");}
else 
{printf("l addition est positif \n");
printf("la soustraction est negatif \n");}}
if (a!=0 && b==0)
{printf("le produit est nulle \n");
printf("la division est impossible \n");
if (a<0)
{printf("l addition est negatif \n");
printf("la soustraction est negatif\n");}
else 
{printf("l addition est positif \n");
printf("la soustraction est positif \n");}}
if (a==0 && b==0)
{printf("le produit est nulle \n");
printf("la division est impossible \n");
printf("l addition est nulle \n");
printf("la soustraction est nulle \n");}
if (a>0 && b>0)
{printf("le produit est positif \n");
printf("la division est positif \n");
printf("l addition est positif \n");
if (a>b)
printf("la soustraction est positif \n");
else if (a!=b)
printf("la soustraction est negatif \n");}
if (a<0 && b<0)
{printf("le produit est positif \n");
printf("la division est positif \n");
printf("l addition est negatif \n");
if (a>b)
printf("la soustraction est positif \n");
else if (a!=b)
printf("la soustraction est negatif \n");}
if (a<0 && b>0)
{printf("le produit est negatif \n");
printf("la division est negatif \n");
printf("la soustraction est negatif \n");
if (-a>b)
printf("l addition est negatif \n");
else if (a!=b)
printf("l addition est positif \n");}
if (a>0 && b<0)
{printf("le produit est negatif \n");
printf("la division est negatif \n");
printf("la soustraction est positif \n");
if (-b>a)
printf("l addition est negatif \n");
else if (a!=b)
printf("l addition est positif \n");}
if (a==b && a!=0 && b!=0)
{printf("le produit est positif \n");
printf("la division est positif \n");
printf("la soustraction est nule \n");
if (a>0)
printf("l addition est positif \n");
else
printf("l addition est negatif \n");}



}
