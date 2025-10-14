// KS 6th Old enough

#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    printf("how old are you :");
    scanf("%d", &age);
    if (age >= 18)
    printf("you are old enough to vote, drive, get a permit, and go to school ");
    else if (age >= 16)
    printf("you are old enough to drive, get a permit, and go to school ");
    else if (age >= 15)
    printf("you can get a permit to drive and go to school ");
    else if (age >= 5)
    printf ("you can go to school ");
    else if (age <= 4)
    printf("you too young ");
    return 0;
}