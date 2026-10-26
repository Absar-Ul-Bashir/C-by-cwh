#include<stdio.h>

float CtoF(float);

float CtoF(float c){
    return ((9.0/5.0)*c + 32);
}

int main(){
    float c;
    printf("Enter temperature in ˚C : ");
    scanf("%f",&c);
    printf("\nTemp in ˚F is : %0.2f˚F",CtoF(c));
}