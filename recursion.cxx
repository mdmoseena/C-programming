#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a=0;
	printf("%d ",++a);
	if(a==1)
	  exit(0);
	 main();
}