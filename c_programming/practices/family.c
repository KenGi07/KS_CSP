// KS 6th Family
#include <stdio.h>

int main() {
    char *family[] = {"bart", "stewart", "jackson"};
    for (int i = 0; i < 3; i++)
        printf("hi %s\n", family[i]);
    return 0;
}