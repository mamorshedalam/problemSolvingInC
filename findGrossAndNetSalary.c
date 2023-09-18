#include <stdio.h>

float calculateSalary(float DA, float HA, float OverTime, int BS);
void printResults(char name[1024], float netSalary, float tex, float grossSalary);

int main()
{

     // VARIABLE INPUT FROM USER
     char name[1024];
     int basicSalary;
     float overTime;

     // DEFAULT VALUES
     float dearnessAllowance, houseAllowance, taxRate;
     int insurance;

     // INPUT SALARY FROM THE USER
     printf("Enter your name: ");
     scanf("%s", &name);

     // INPUT SALARY FROM THE USER
     printf("Enter your basic salary: ");
     scanf("%d", &basicSalary);

     // INPUT OVERTIME FROM THE USER
     printf("Enter your over time: ");
     scanf("%f", &overTime);

     if (basicSalary > 9999)
     {
          dearnessAllowance = 1.2;
          houseAllowance = 1.0;
          taxRate = 5.0;
          insurance = 100;

          float netSalary = calculateSalary(dearnessAllowance, houseAllowance, overTime, basicSalary);
          float tax = (taxRate * netSalary) / 100;
          float grossSalary = netSalary - tax - insurance;
          printResults(name, netSalary, tax, grossSalary);
     }
     else if (basicSalary > 999)
     {
          dearnessAllowance = 0.8;
          houseAllowance = 0.6;
          taxRate = 3.0;
          insurance = 50;

          float netSalary = calculateSalary(dearnessAllowance, houseAllowance, overTime, basicSalary);
          float tax = (taxRate * netSalary) / 100;
          float grossSalary = netSalary - tax - insurance;
          printResults(name, netSalary, tax, grossSalary);
     }
     else
     {
          dearnessAllowance = 0.5;
          houseAllowance = 0.4;
          taxRate = 0.0;
          insurance = 10;

          float netSalary = calculateSalary(dearnessAllowance, houseAllowance, overTime, basicSalary);
          float tax = (taxRate * netSalary) / 100;
          float grossSalary = netSalary - tax - insurance;
          printResults(name, netSalary, tax, grossSalary);
     }
}

float calculateSalary(float DA, float HA, float OverTime, int BS)
{
     float salary = (BS + (5 * OverTime));
     float totalDearnessAllowance = (DA * salary) / 100;
     float totalHouseAllowance = (HA * salary) / 100;
     return salary + totalDearnessAllowance + totalHouseAllowance;
};

void printResults(char name[1024], float netSalary, float tax, float grossSalary)
{
     printf("Mr./Mrs. %s.\n", name);
     printf("Your Net Salary is: %.2f\n", netSalary);
     printf("The tax you have to pay: %.2f\n", tax);
     printf("Your Gross Salary is: %.2f\n", grossSalary);
};