// KS 6th strings notes
#include <stdio.h>
#include <string.h>

int main(void){

    char name[100]= "Xavier";
    char last_name[25];
    printf("last name:\n");
    scanf("%s", last_name);

    printf("[%s]", name);
    strcat(name, " ");
    printf("[%s]", name);

    strcat(name, last_name);
    printf("[%s]", name);

    return 0;
}
