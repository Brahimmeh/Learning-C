#include<stdio.h>
main()
{
	int T[10] ={10,6,23,15,4,12,7,38,40,1},*p;
	
	p=T;
	
	for(p=T;p<T+10;p++)
	{ printf("l'adresse d'element d'indice %x est : %x \n" ,p-T,p);
	}
}
