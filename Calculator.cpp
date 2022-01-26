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
    int a, b, c, n, r;
    int x = 1;
    cout << "1. Sum of 2 nums\t2. Diff. of 2 nums\n3. Factorial\t4. Permutation\n5. Combination\t6. Exit";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Which are the 2 Numbers?\n";
        cin >> b >> c;
        cout << "Addition of these 2 numbers is " << addin(b, c);
        break;
    case 2:
        cout << "Which are the 2 Numbers?\n";
        cin >> b >> c;
        cout << "Difference between these Numbers is " << sub(b, c);
        break;
    case 3:
        cout << "Which number factorial?\n";
        cin >> n;
        r = factorial(n);
        printf("%d! = %d", n, r);
        break;
    case 4:
        while (x == 1)
        {
            cout << "Value of n:";
            cin >> n;
            cout << "Value of r:";
            cin >> r;
            if (n > r && n != 0 && r != 0)
            {
                cout << n << "P" << r << combin(n, r);
                x = 2;
            }
            else
                x = 1;
        }
        break;
    case 5:
        while (x == 1)
        {
            cout << "Value of n:";
            cin >> n;
            cout << "Value of r:";
            cin >> r;
            if (n > r && n != 0 && r != 0)
            {
                cout << n << "C" << r << combin(n, r);
                x = 2;
            }
            else
                x = 1;
        }
        break;
    default:
        exit(0);
        break;
    }
}

int main()
{
    int a;
    char ch;
    cout << "what you want\n\n1.\tCalculator\n2.\tNothing";
    cin >> a;
    switch (a)
    {
    case 1:
        calculator();
        break;
    default:
        exit(0);
    }
    cout << "Runs";
    calculator();
    return 0;
}
