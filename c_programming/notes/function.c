// KS 6th Functions notes

#include <stdio.h>


void birthday(char* name, int age){
    printf("happy birthday to you\n");
    printf("happy birthday to you\n");
    printf("happy birthday dear %s\n", name);
    printf("happy birthday to you\n");
    printf("happy birthday %s is now %d\n", name, age);
}

int main(void){
    birthday("kenji",15);
    birthday("matias",67);
    birthday("ryan",123);

    return 0;
}