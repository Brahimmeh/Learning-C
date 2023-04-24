#include<stdio.h>
main()
{ int j,m,dizaines,unites,s,f;
 do
 {printf("veuillez entrer la date sous forme JJ/MM \n");
 scanf("%d%d" ,&j,&m);
 if (j<=0||j>31)
  printf("le jour est invalide \n");
 if(m<=0||m>12)
 printf("le mois est invalide \n");}
 while(j<=0||j>31||m<=0||m>12);
   
   dizaines=j/10;
   if(dizaines==0)
   { switch(j)
      { case 1: printf("le premier");break;
        case 2: printf("le deux");break;
        case 3: printf("le trois");break;
        case 4: printf("le quatre");break;
        case 5: printf("le cinq");break;
        case 6: printf("le six");break;
        case 7: printf("le sept");break;
        case 8: printf("le huit");break;
        case 9: printf("le neuf");break;
	  }
   }
   else if(dizaines!=2 &&dizaines!=3)
   { f=j%10;
switch (f)
    { case 0: printf("le dix");break;
	case 1: printf("le onze");break;
        case 2: printf("le douze");break;
        case 3: printf("le treize");break;
        case 4: printf("le quatorze");break;
        case 5: printf("le quinze");break;
        case 6: printf("le seize");break;
        case 7: printf("le dix-sept");break;
        case 8: printf("le dix-huit");break;
        case 9: printf("le dix-neuf");break;
	  }}
if (dizaines==2)
   { f=j%10;
switch (f)
    { case 0: printf("le vingt");break;
	case 1: printf("le vingt-un");break;
        case 2: printf("le vingt-deux");break;
        case 3: printf("le vingt-trois");break;
        case 4: printf("le vingt-quatre");break;
        case 5: printf("le vingt-cinq");break;
        case 6: printf("le vingt-six");break;
        case 7: printf("le vingt-sept");break;
        case 8: printf("le vingt-huit");break;
        case 9: printf("le vingt-neuf");break;
	  }}
	  
if (dizaines==3)
   { f=j%10;
switch (f)
    { case 0: printf("le trente");break;
	case 1: printf("le trente-un");break;
    case 2: printf("le trente-deux");break;
	  }}

s=m/10;
if (s==0){
switch (m)
    { case 1: printf(" Janvier");break;
        case 2: printf(" Fevrier");break;
        case 3: printf(" Mars");break;
        case 4: printf(" Avril");break;
        case 5: printf(" Mai");break;
        case 6: printf(" Juin");break;
        case 7: printf(" Juillet");break;
        case 8: printf(" Aout");break;
        case 9: printf(" Septembre");break;

}}
else 
{s=m%10;
switch (s)
    { case 0: printf(" Octobre");break;
	case 1: printf(" Novembre");break;
    case 2: printf(" Decembre");break;
        }}}
