// KS 6th Financial calculator

#include <stdio.h>

int main(void) {


    float income, rent, utilities, groceries, transportation;
    float rpercent, upercent, gpercent, tpercent;
    float savings, spercent, smoney;

    
    printf("monthly income: ");
    scanf("%f", &income);
    printf("monthly rent/mortgage: ");
    scanf("%f", &rent);
    printf("monthly utilities: ");
    scanf("%f", &utilities);
    printf("monthly groceries: ");
    scanf("%f", &groceries);
    printf("monthly transportation: ");
    scanf("%f", &transportation);

    rpercent = (rent / income) * 100;
    upercent = (utilities / income) * 100;
    gpercent = (groceries / income) * 100;
    tpercent = (transportation / income) * 100;
    spercent = 10.0; 
    savings = (spercent / 100) * income;
    smoney = income - (rent + utilities + groceries + transportation + savings);

    printf("rent is $%.2f and that is %.0f%% of your income\n", rent, rpercent);
    printf("utilities are $%.2f and that is %.0f%% of your income\n", utilities, upercent);
    printf("groceries are $%.2f and that is %.0f%% of your income\n", groceries, gpercent);
    printf("transportation is $%.2f and that is %.0f%% of your income\n", transportation, tpercent);
    printf("you save $%.2f a month, that is %.0f%% of your income\n", savings, spercent);
    printf("You have $%.2f of spending money each month\n", smoney);
    
    return 0;
}
