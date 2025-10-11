// KS 6th Silly sentences

#include <stdio.h>
#include <string.h>

int main (void){
    char name[20]; 
    char verb[20];
    char adjective[20]; 
    char location[20];
    char plural[20];
    char creature[20];

    printf("Tell me a name:");
    scanf("%s", name);

    printf("Tell me a verb:");
    scanf("%s", verb);

    printf("Tell me a location:");
    scanf("%s", location);

    printf("Tell me a plural animal:");
    scanf("%s", plural);

    printf("Tell me a creature:");
    scanf("%s", creature);

    printf("Tell me an adjective:");
    scanf("%s", adjective);

    printf("%s was an exicted %s person that loved going to %s while hanging out with %s and also hanging out with their mystical %s who was %s", name, verb, location, plural, creature, adjective);

    


    return 0;
}
