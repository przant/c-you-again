#include <stdio.h>

void modifyArray(const int[]);

int main(int argc, char const* argv[]) {
   int iNumbers[3] = { 2,4,6 };

   modifyArray(iNumbers);

   return 0;
} // End main

void modifyArray(const int num[]) {
   int x;

   for ( x = 0; x < 3; x++ ) {
      num[x] = num[x] * num[x]; // This will not work!
   }

}
