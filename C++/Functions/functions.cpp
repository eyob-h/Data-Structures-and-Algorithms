// Function prototype, declaration, and definition

// Function declaration
int multiply(int, int);

// Function prototype
int divide(int dividend, int divisor);

int main()
{
    multiply(4, 5);
    divide(10, 2);
    return 0;
}

// Function definitions
int multiply(int a, int b)
{
    return a * b;
}

int divide(int dividend, int divisor)
{
    return dividend / divisor;
}