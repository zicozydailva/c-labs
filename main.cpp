#include <iostream>
#include <cstdio>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
void arithmetic();

int main() {
    std::cout << "Welcome to the C++ Arithmetic Program!\n";
    arithmetic();
    return 0;
}

// Handles input and invokes specific arithmetic methods
void arithmetic() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Complex logical checks
    if (num1 == 0 && num2 == 0) {
        printf("Both numbers are zero. Nothing to compute!\n");
        return;
    }

    if (num1 < 0 || num2 < 0) {
        printf("Warning: Negative numbers detected.\n");
    }

    // Perform operations
    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));

    // Conditional logic using logical operators
    if (!(num2 == 0)) {
        printf("Quotient: %.2f\n", divide(num1, num2));
    } else {
        printf("Cannot divide by zero!\n");
    }
}

// Standalone arithmetic functions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    // additional logical safeguard
    if (b == 0) {
        printf("Error: Division by zero not allowed.\n");
        return 0.0f;
    }
    return (float)a / b;
}
