#include <stdio.h>
#include <stdlib.h>

void printnum(int i);
int main()
{
    int i = 1;
    printnum(i);
    return 0;
}
void printnum(int i)
 {
    printf("%d ", i); 
    i++;

    if (i == 6)   
        exit(0);

    printnum(i);  
}