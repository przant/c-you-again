#include <stdio.h>

int main(int argc, char const* argv[]) {
   int iArray[5] = { 1,2,3,4,5 };

   int* iPtr = iArray;

   printf("\nAddress of pointer: %p\n", iPtr);
   printf("First address of array: %p\n", &iArray[0]);

   printf("\nPointer points to: %d\n", *iPtr);
   printf("Firts element of array contains: %d\n\n", iArray[0]);

   return 0;
}
