#include<stdio.h>
#include<string.h>
main()
{
	char ch1[50],ch2[50];
	int i,n,x,j,y,ok;
	char*p;

	
	printf("Entrez la premiere phrase\n");
	gets(ch1);
	printf("Entrez la deuxieme phrase\n");
	gets (ch2);
	p=strstr(ch1,ch2);
for(i=x;i<strlen(ch1);i++)
	ch1[i]=ch1[i+strlen(ch2)];
	
	puts(ch1);
}
