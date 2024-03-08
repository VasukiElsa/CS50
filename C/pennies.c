#include<stdio.h>
#include<math.h>
int main(){
    float amount;
    printf("Dollar amount : ");
    scanf("%f",&amount);
    //int pennies = amount * 100;
    int pennies = round(amount * 100);
    printf("Pennies : %d\n",pennies);
}