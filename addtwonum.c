#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    // scanf() reads the input from the user and stores it in variables a and b
    scanf("%d %d", &a, &b); 

    sum = a + b;

    printf("Sum = %d\n", sum);
    return 0;
}