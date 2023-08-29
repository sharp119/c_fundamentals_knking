#include <stdio.h>

int main(){
    float d;
    printf("Enter dollars-and-cents : ");
    scanf("%f", &d);
    printf("With tax : $%.2f\n", 5.0f/100.0f * d + d);
    return 0; 
}