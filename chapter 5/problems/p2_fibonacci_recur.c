#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1||n==2){
        return (n-1);
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    //to print nth term of fibonacci series through recursion.
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    printf("\n%dth term of fibonacci series is : %d",n,fibonacci(n));
}