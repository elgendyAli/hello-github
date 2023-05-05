#include <stdio.h>

int main (void)
{
   while(0 == 1){
    printf("foo\n");
   }

   do {
    printf("bar\n");
   } while (0 == 1);
}