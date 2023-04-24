#include<stdio.h>
#include<string.h>
main(){
	
	int i;
	char ch1[100],ch2[100];
	char*p;
	
	gets(ch1);
	gets(ch2);
	p=strstr(ch1,ch2);
	
	for(i=p-ch1;i<strlen(ch1);i++)
	ch1[i]=ch1[i+strlen(ch2)];
	
	puts(ch1);
}
