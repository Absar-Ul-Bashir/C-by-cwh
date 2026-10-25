#include<stdio.h>

int mul(int a,int b){
    return a*b;
}

int main(){
    int a,b;
    printf("Enter two numbers : \n");
    scanf("%d %d",&a,&b);
    printf("%d x %d = %d",a,b,mul(a,b));
    return 0;
}