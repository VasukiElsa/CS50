#include<stdio.h>

float calculate_discount(float regular, int percentage);

int main(){
    float regular;
    scanf("%f",&regular);
    int percentage;
    scanf("%d",&percentage);
    float discount = calculate_discount(regular, percentage);
    printf("Discounted Price is %.2f\n", discount);
}

float calculate_discount(float regular, int percentage){
    return regular * (100 - percentage) / 100;
}