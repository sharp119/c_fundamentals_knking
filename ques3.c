#include <stdio.h>

int main(){
    float r;
    printf("Enter the radius in meter : ");
    scanf("%f", &r);
    float v = 4.0f/3.0f * 3.1415f * r * r * r;
    printf("Vloume in (meters) = %.2f\n", v);
}