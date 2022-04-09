#include <stdio.h>

int main(int argc, char const *argv[]) {
   float fRevenue = 0, fCost = 0;

   /* profit = revenue - cost */

   printf("Enter total revenue: ");
   scanf("%f", &fRevenue);
   printf("Enter total cost: ");
   scanf("%f", &fCost);
   printf("Yout profit is $%.2f\n", fRevenue - fCost);

   return 0;
}
