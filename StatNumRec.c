#include <stdio.h>
#include <stdlib.h>
 
 void printnum();
  int main()  
 {
    printnum();
    return 0;
}
 void printnum()
  {
    static int i = 1;  
      printf("%d ", i);
      i++;

    if (i == 6)         
        exit(0);
    printnum();        
}	
