#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    // Read the first integer from the user
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    // Read the second integer from the user
    scanf("%d", &divisor);

    // Basic error handling for division by zero
    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\\n");
        return 1; // Exit with an error code
    }

    // Calculate the quotient (integer result)
    quotient = dividend / divisor;

    // Calculate the remainder using the modulo operator
    remainder = dividend % divisor;

    // Print the results
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0; // Indicate successful execution
}
