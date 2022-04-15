#include <stdio.h>

int main(int argc, char const* argv[]) {
   int iNumber = 5;

   printf("&inumber"); // pass read-only argument

   return 0;
} // end main

void printArgument(const int* num) { // pass by reference, but read-only
   printf("\nRead only Argument is: %d\n", *num);
}