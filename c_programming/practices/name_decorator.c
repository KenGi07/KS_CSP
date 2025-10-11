// KS 6th name decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[30];
    char decoratedname[75];

    printf("write your name down:");
    scanf("%s", name);

    strcat (decoratedname, ":3:3:3");
    strcat (decoratedname, name);
    strcat (decoratedname, ";3;3;3");
    printf( "decorated name: %s", decoratedname);

    return 0;
}