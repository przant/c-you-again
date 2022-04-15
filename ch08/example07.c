#include <stdio.h>

int main( int argc , char const *argv [] ) {
   char *str1 = "37";
   char *str2 = "20";

   // produces invalid results
   printf( "\nString 1  +  String 2 is %d\n\n" , *str1 + *str2 );

   return 0;
}
