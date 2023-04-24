#include<stdio.h>
main()
{
	int T[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}, *p;
	
	p=T;
	
	for(p=T;p<T+15;p++)
	{ if((p-T)%5==0)
	printf("\n");
	
	printf("%d " ,*p);
	
	}
}
