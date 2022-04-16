#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const* argv[]) {
   int x = 1;
   int* iPtr;

   iPtr = &x;
   *iPtr = 5;

   printf("\n*iPtr = %p\n&x = %p\n", iPtr, &x);
   return 0;
}
