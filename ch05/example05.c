#include <stdio.h>
#include <stdlib.h>

void printLuckyNumber(); // Function prototype

int iLuckyNumber = 0;

int main(int argc, char const* argv[]) {
   printf("\nEnter your lucky number: ");
   scanf("%d", &iLuckyNumber);

   printLuckyNumber();

   return 0;
}


// Function definition
void printLuckyNumber() {
   printf("\nYour lucky number is: %d\n\n", iLuckyNumber);
}