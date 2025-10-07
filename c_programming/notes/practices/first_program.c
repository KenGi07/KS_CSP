// KS 6th first program
#include <stdio.h>


int main (void) {
    printf("enter your name: ");
    char name[15];
    scanf("%s", name);

    printf("hello, %s welcome to your first c program.\n", name);
    return 0;
}