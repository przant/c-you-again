#include <stdio.h>
#include <string.h>

typedef struct employee {
   int id;
   char name[10];
   float salary;
} e;

void processEmployee( e ); // Supply prototype with structure alias name


int main( int argc, char const *argv[] ) {
   e emp1 = { 0,0,0 }; // Initialize members

   processEmployee( emp1 ); // Pass structure by value

   printf( "\nID     : %d", emp1.id );
   printf( "\nName   : %s", emp1.name );
   printf( "\nSalary : $%.2f\n\n", emp1.salary );

   return 0;
} // End main function

void processEmployee( e emp ) { // Receives a copy of the structure
   emp.id = 123;
   strcpy( emp.name, "Antonio" );
   emp.salary = 65000.00;
} // End process employee