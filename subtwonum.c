#include <stdio.h>

int main() {
    int a, b, sub;

    printf("Enter two numbers: ");
    // scanf() reads the input from the user and stores it in variables a and b
    scanf("%d %d", &a, &b); 

    sub = a - b;

    printf("sub = %d\n", sub);
    return 0;
}