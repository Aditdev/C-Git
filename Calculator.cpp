#include <iostream>

using namespace std;

// Function to add
int addin(int a, int b)
{
    return (a + b);
}

// Function to subtract
int sub(int a, int b)
{
    return (a - b);
}

// Function for factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}

// Function for permutation
int permun(int n, int r)
{
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

// Function for combination
int combin(int n, int r)
{
    return (permun(n, r) * factorial(r));
}

void calculator()
{
    ;
}
int main()
{
    int a, b, c;
    cout << "Runs";
    calculator();
    return 0;
}

