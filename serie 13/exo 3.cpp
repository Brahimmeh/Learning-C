#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{ 
  char ch1[50],ch2[50],ch3[50];
 int x,r,i,j;
 bool k=true;
   
   
   printf("entrer la chaine 1 :\n");
   gets(ch1);
   printf("entrer la chaine 2 :\n");
   gets(ch2);
   strcpy(ch3,ch1);
  
  
  r=0;
  if(strstr(ch1,ch2)!=NULL)
  { 
    for(i=0;i<strlen(ch1);i++){
    	
    	if(ch1[i]==ch2[0])
    	{  j=i;k=true;
    		
while(r<strlen(ch2) && (k=true))
      { if(ch1[i]==ch2[r])
        {
		r++;i++;}
        else
       {
		 k=false;
		 r=0;}
	}}
        
//methode d'affectation//	
  i=0;	    
   do{  
   	    for(x=j;x<strlen(ch1);x++)
         { ch1[x]=ch1[x+1];} 
   	    i++;
   }while(i<strlen(ch2));

   puts(ch1);
//methode d'affichage//
  for(i=0;i<strlen(ch3);i++) 
  {if(i==j)
    i=j+strlen(ch2);
   
    printf("%c",ch3[i]);
  }}}}

    
   
