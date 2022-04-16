#include <stdio.h>
#include <stdlib.h>

void printReportHeader(); // Function prototype

int main(int argc, char const* argv[]) {
   printReportHeader();

   return 0;
}


// Function definition
void printReportHeader() {
   printf("\nColumn1\tColumn2\tColumn3\tColumn4\t\n\n");
}