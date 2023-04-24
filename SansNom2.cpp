//afficher la date du lendemain//
#include<stdio.h>
main()
{
int a,j,m,g,j1,a1,m1;
 printf("veuillez entrer l annee:\n");
 scanf("%d" ,&a);
  if (a<1 )
	printf("veuillez entrer une annee valide\n");
  else 
  {
    printf("veuillez entrer le mois:\n");
	scanf("%d",&m);
    if (m<1 || m>12)
    printf("veuillez entrer un mois valid\n");
 else {
 printf("veuillez entrer le jour: \n");
 scanf("%d",&j);
 if(j<1 || j>31)
printf("veuillez enter un jour valid \n");
 else  
{
  if(m==2 && j>29)
        printf("le mois fevrier ne contient pas plus de 29 jours\n");
if (m==2 && j>=29 && j<30)
    {if ( a%400!=0 && a%4!=0 || a%100==0)
       printf("lannee n est pas bisextile veuillez entrer un nombre de jour inferieure ou egale a 28 \n");}
if((m==4 || m==6 || m==9 || m==11) && j>30 )
       printf("veuillez entrer un nombre de jour inferieure ou egale a 30 \n");
         
if( (m==2 && j>=29 &&  (a%400!=0 && a%4!=0 || a%100==0)) || ((m==4 || m==6||m==9||m==11)&&j>30) || (j>=30 && m==2))
printf("veuillez correcter vos details\n");

else {
printf("la date saisie est: %d/%d/%d \n" ,j,m,a);
if ((m==2 &&  j==29)||((m==2 && j==28))||((j==30 && (m==4 || m==6 || m==9 || m==11))||((j==31 && (m!=4 || m!=6 || m!=9 || m!=11))||((m==12 && j==31)))))
{if (m==2 &&  j==29  )
  {
  j1=01;
  m1=m+1;
  a1=a;}
  if (m==2 && j==28)
  { if ( a%400!=0 && a%4!=0 || a%100==0)
  {
  j1=01;
  m1=m+1;
  a1=a;}
  else 
   {j1=29;
  m1=m;
  a1=a;}}
if (j==30 && (m==4 || m==6 || m==9 || m==11))
 {j1=01;
  m1=m+1;
  a1=a;}
if (j==31 && (m!=4 || m!=6 || m!=9 || m!=11))  
{j1=01;
  m1=m+1;
  a1=a;}
if (m==12 && j==31)
{
j1=01;
m1=01;
a1=a+1;}}
else {
j1=j+1;
     m1=m;
     a1=a;}
printf("la date du lendemain est: %d/%d/%d \n" ,j1,m1,a1);
}
}}}}
