#include <stdio.h> // Include standard input-output header file.

int main() {
    int num1, num2, product; // Declare variables to store two numbers and their product.

    // Prompt the user for input.
    printf("Enter two integers: ");
    
    // Read the numbers from the user. The %d format specifier is used for integers.
    scanf("%d %d", &num1, &num2); 

    // Perform multiplication using the '*' operator and store the result.
    product = num1 * num2; 

    // Display the result.
    printf("Product: %d\n", product); 

    return 0; // Indicate that the program ended successfully.
}
