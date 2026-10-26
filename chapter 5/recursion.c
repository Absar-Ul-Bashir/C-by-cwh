#include <stdio.h>
int f = 1;
int factorial(int);
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return f;
    }
    f = f * n;
    factorial(n - 1);
    return f;
}

int main()
{
    int a;
    printf("Enter a whole number : ");
    scanf("%d", &a);
    printf("\nFactorial of %d is %d", a, factorial(a));
}
