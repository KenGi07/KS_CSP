// KS 6th loops notes
#include <stdio.h>

int main(void){
    int nums[]={5,32,5,25,23,57,54,354,765};
    char candy[5][20]={"Skittles", "Butterfinger", "Reese's", "Twix", "KitKat"};
    for (int x=0; x<11; x++){
        printf("%d\n", nums[x]);
    }
    
    for(int i=0; i<5; i++){
        printf("%s is my favorite candy\n", candy[i]);
    }

    for (int num=1; num < 11; num++)
    {
    printf("%d\n", num);
    }
    int goose=6;
    int count=0;
    while (count != goose){
        printf("duck\n");
        count++;

    }
    printf("goose");

    return 0;
}