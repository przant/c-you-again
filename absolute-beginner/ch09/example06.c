#include <stdio.h>
#include <string.h>

typedef struct employee {
   int id;
   char name[10];
   float salary;
} emp;


void processEmp( emp * );

int main( int argc, char const *argv[] ) {
   emp emp1 = { 0,0,0 };
   emp *ptrEmp = NULL;

   ptrEmp = &emp1;

   processEmp( ptrEmp );

   printf( "\nID     : %d", ptrEmp->id );
   printf( "\nName   : %s", ptrEmp->name );
   printf( "\nSalary : $%.2f\n\n", ptrEmp->salary );

   return 0;
} // End main

void processEmp( emp *e ) {
   e->id = 123;
   strcpy( e->name, "Tony" );
   e->salary = 65000.00;
} // End processEmp