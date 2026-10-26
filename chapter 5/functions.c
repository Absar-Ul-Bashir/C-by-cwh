#include <stdio.h>

int mul(int a, int b)
{
    /*the two values are stored in local variables
    (a,b) of this function and they have nothing to do with
    (a,b) in main.If I change them here there will be no change in
    (a,b) there
    */
    return a * b;
}

int main()
{
    int a, b;
    printf("Enter two numbers : \n");
    scanf("%d %d", &a, &b);
    printf("%d x %d = %d", a, b, mul(a, b));
    return 0;
}