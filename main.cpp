#include <iostream>
#include <cstdio>  // for printf and scanf

// Function declaration (prototype)
int arithmetic();

int main() {
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    int age = 25;
    float height = 1.5;
    char gender = 'F';
    double balance = 12345.6789;

    printf("You are %d years old!\n", age);

    // ✅ Invoke the function here
    arithmetic();

    return 0;
}

int arithmetic() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);   // ✅ use & before variable name
    printf("Enter second number: ");
    scanf("%d", &num2);   // ✅ same here

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("The sum is: %d\n", sum);
    printf("The difference is: %d\n", difference);
    printf("The product is: %d\n", product);

    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("The quotient is: %.2f\n", quotient);
    } else {
        printf("Cannot divide by zero!\n");
    }

    return 0;
}
