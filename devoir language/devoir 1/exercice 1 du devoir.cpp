 #include<stdio.h>
 main ()
 { int a,b,c,d,e,f,g;
 printf("veuillez entrer un nombre entier de 4 chiffres:");
 scanf("%d",&g);
 printf("nombre entre = %d \n" ,g);
 a=g/1000;
 b=g%1000;
 c=b/100;
 d=b%100;
 e=d/10;
 f=d%10;
  printf("nombre Sortie = %d%d%d%d \n" ,f,e,c,a);

 }
