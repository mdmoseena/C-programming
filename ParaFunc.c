#include <stdio.h>
void printnum(int a);   
int main()
{
    int a;
    a = 10;
   printf("In main a = %d\n", a);    
       printnum(a);   
   printf("In main end a = %d\n", a);
       return 0;
}
void printnum(int a)  
{
    a++;   
    printf("In printnum fun a = %d\n", a);
}