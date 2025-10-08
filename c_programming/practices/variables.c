// KS 6th variables

#include <stdio.h>

 int main (void) {
   char name [15];
   int number;

   float gpa;

   char breakfast [15];

   char color [15];

   char school [15];

   int year;

   char eye_color [8];

   int age;

   char subject [15];

   
   printf("what is your name ");
   scanf("%s", name);

   printf("what is a number between 1 and 5 ");
   scanf("%d", &number);

   printf("what's your GPA ");
   scanf("%f", &gpa);

   printf("what did you eat for breakfast ");
   scanf("%s", breakfast);

   printf("what is your favorite color ");
   scanf("%s", color);

   printf("what is the name of your school ");
   scanf("%s", school);

   printf("what's the year ");
   scanf("%d", &year);

   printf("what is your eye color ");
   scanf("%s", eye_color);

   printf("how old are you? ");
   scanf("%d", &age);

   printf("what is your favorite subject");
   scanf("%s", subject);

   
   printf("Name: %s\n", name);

   printf("Number (1-5): %d\n", number);

   printf("GPA: %.2f\n", gpa);

   printf("what you had for breakfast: %s\n", breakfast);

   printf("favorite Color: %s\n", color);

   printf("name of school: %s\n", school);

   printf("Year: %d\n", year);

   printf("eye Color: %s\n", eye_color);

   printf("age: %d\n", age);

   printf("Favorite Subject: %s\n", subject);


   return 0;
}