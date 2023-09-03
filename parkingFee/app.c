#include <stdio.h>

int main()
{
     int parkingHours;

     printf("Enter parking time:");
     scanf("%d", &parkingHours);

     if (parkingHours == 0)
     {
          printf("No parking fee");
     }
     else if (parkingHours <= 1)
     {
          printf("Parking fee is 2RMB");
     }
     else
     {
          float totalParkingFee = (((parkingHours - 1) * 0.5) + 2);

          printf("Parking fee is %.2f", totalParkingFee);
          // float roundParkingFee = roundf(totalParkingFee * 100) / 100;

          // printf("Parking fee is %f", roundParkingFee);
     }
}