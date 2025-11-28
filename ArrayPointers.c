#include <stdio.h>

int main()
{
    int a[3] = {10, 20, 30};
    int *ptr;
    int i; 
       ptr = a;
    for(i = 0; i < 3; i++)
    {
        printf("%d ", *(ptr + i));
    }  
      return 0;
}