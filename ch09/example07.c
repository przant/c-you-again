#include <stdio.h>
#include <string.h>

typedef struct employee {
   int id;
   char name[10];
   float salary;
} e;

void processEmp( e * ); // Supply prototype with ponter of structure type

int main( int argc, char const *argv[] ) {
   e empArray[3] = { 0,0,0 };
   int x;

   processEmp( empArray );

   for ( x = 0; x < 3; x++ ) {
      printf( "\nID     : %d", empArray[x].id );
      printf( "\nName   : %s", empArray[x].name );
      printf( "\nSalary : $%.2f\n", empArray[x].salary );
   } // End loop

   printf( "\n" );

   return 0;
} // End main

void processEmp( e *emp ) {
   emp[0].id = 123;
   stpcpy( emp[0].name, "Sheila" );
   emp[0].salary = 65000.00;

   emp[1].id = 234;
   stpcpy( emp[1].name, "Hunter" );
   emp[1].salary = 28000.00;

   emp[2].id = 456;
   stpcpy( emp[2].name, "Kenya" );
   emp[2].salary = 65000.00;

} // End main loop
