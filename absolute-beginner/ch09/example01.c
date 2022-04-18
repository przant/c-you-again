#include <stdio.h>
#include <string.h>

struct employee {
   char fname[10];
   char lname[10];
   int id;
   float salary;
};

int main( int argc, char const *argv[] ) {
   // Create instance of employee
   struct employee emp1;

   // Assign values to members
   strcpy( emp1.fname, "Antonio" );
   strcpy( emp1.lname, "Perez" );
   emp1.id = 123;
   emp1.salary = 50000.00;

   // Print member contents
   printf( "\nFirst Name  : %s", emp1.fname );
   printf( "\nLast Name   : %s", emp1.lname );
   printf( "\nEmployee ID : %d", emp1.id );
   printf( "\nSalary      : $%.2f\n\n", emp1.salary );

   return 0;
} // End main

