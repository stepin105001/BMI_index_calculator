#include <stdio.h>

void call_function() {
   float weight,height;
   printf("enter weight");
   scanf("%f",&weight);
   printf("enter height");
   scanf("%f",&height);
   float bmi = BMI(weight,height);
   printf("BMI index is : %.2f ",bmi);
   return 0;
}
