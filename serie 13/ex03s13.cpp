#include<stdio.h>
#include<string.h>
main()
{
	char ch1[50],ch2[50];
	int i,n,j,x,y,ok;
	
	
	printf("Entrez la premiere phrase\n");
	gets(ch1);// gets c est une fonction qui permet de lire toute la chaine de caractère d'un seul coup
	
	
	printf("Entrez la deuxieme phrase\n");
	gets (ch2);

	
	if(strstr(ch1,ch2)!=NULL){
printf("la sous chaine existe\n");	
   i=0;j=0;
    	while(i<strlen(ch1))
    {
		if(ch1[i]!=ch2[j])
    	 	{i++;    
		}else
			 {
			 x=i;ok=0;
			 while(j<strlen(ch2)&&ok==0)
			        {
			        	if(ch1[i]==ch2[j])
			        	{
					j++;i++;
                        }
			        	else {
						ok=1;j=0;}
					}
			
			
			}
			
		}
}
		if(j==strlen(ch2))
	for(i=x;i<strlen(ch1);i++)
	ch1[i]=ch1[i+strlen(ch2)];
ch1[i]='\0';
	
	puts(ch1);

}
