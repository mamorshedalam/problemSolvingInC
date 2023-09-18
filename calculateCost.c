#include <stdio.h>
#include <stdlib.h>

int main()
{

     int salePrice;
     float buyPriceRMB, productWeight;

     printf("Enter product buying price: ");
     scanf("%f", &buyPriceRMB);

     printf("Enter product sale price: ");
     scanf("%d", &salePrice);

     printf("Enter product product weight: ");
     scanf("%f", &productWeight);

     float buyPrice = buyPriceRMB * 16.30;
     float courierPrice = 640 * productWeight;
     float extraCost = (buyPrice + courierPrice) * 10 / 100;
     float totalCost = (buyPrice + courierPrice + extraCost);
     float totalProfit = salePrice - totalCost;

     printf("--------------------------------------------------------------------\n");
     printf("Total cost: %f\n", totalCost);
     printf("Total cost: %f\n", totalProfit);

     system("pause");

     return 0;
}