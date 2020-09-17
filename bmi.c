#include <stdio.h>

void call_bmi() {
   float weight,height;
   printf("enter weight");
   scanf("%f",&weight);
   printf("enter height");
   scanf("%f",&height);
   float bmi = weight/height*2;
   printf("BMI index is : %.2f ",bmi);
   return 0;
}
