// KS 6th conditionals notes
#include <stdio.h>
#include <string.h>

int main(void){
    int grade;
    printf("what is your grade: ");
    scanf("%d", &grade);

    if(grade>=90){
        printf("you have an A!\n");
    }else if (grade>=80){
        printf("you dont have a B\n");
    }else{
        printf("you dont have an A or B\n");
    }


    return 0;
}

