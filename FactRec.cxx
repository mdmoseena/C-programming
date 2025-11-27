#include<stdio.h>
#include<conio.h>
void main()
{
	int n,result;
	int fact(int);
	scanf("%d",&n);
	result=fact(n);
	printf("factorial is %d",result);
}
int fact(int n)
  {
  	if(n==1)
  	return 1;
  	else
  	   return(n*fact(n-1));
  }
