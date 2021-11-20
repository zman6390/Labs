#include<stdio.h>
/* We have the char date with 10 spaces allocated for it, and in the print function
we have numbers in front of % to space the results out */

int main() {
   int inum, qty;
   float price, amt;
   char date[10];
   printf("Enter the item number: ");
   scanf("%d", &inum);
   printf("Enter the unit price: ");
   scanf("%f", &price);
   printf("\nEnter quantity: ");
   scanf("%d", &qty);
   printf("\nEnter the date (dd/mm/yyyy): ");
   scanf("%s", date);
   amt = price * qty;
   printf("\nItem\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
   printf("%d\t$%7.2f\t%d\t%s\t$%9.2f\n", inum, price, qty, date, amt);
   return 0;
}