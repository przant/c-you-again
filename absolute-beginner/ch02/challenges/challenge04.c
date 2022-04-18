#include <stdio.h>

int main(int argc, char const *argv[]) {
   float iTotalRevenue = 0.0, iPrice = 0.0, iQuantity = 0.0;

   printf("\tProgram to calculate total revenue\n\n");

   printf("Enter price value: ");
   scanf("%f", &iPrice);

   printf("Enter quantity value: ");
   scanf("%f", &iQuantity);

   iTotalRevenue = iPrice * iQuantity;

   printf("\nThe total revenue is $%.2f\n", iTotalRevenue);
   return 0;
}
