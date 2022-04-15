#include <stdio.h>
#include <stdlib.h>

int main( int argc , char const *argv [] ) {
   char *str1 = "37";
   char *str2 = "20";

   int iResult = 0;

   iResult = atoi( str1 ) + atoi( str2 );

   // produces invalid results
   printf( "\nString 1  +  String 2 is %d\n\n" , iResult );

   return 0;
}
