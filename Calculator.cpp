#include <iostream>

using namespace std;

// Function to add
int addin(int a, int b)
{
    return (a + b);
}

// Function for sum of n numbers
int summan(int ininum, int finnum, int steps)
{
    int sum = 1;
    for (int it = ininum; it < finnum; it += steps)
        sum += it;
    return sum;
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

// Void Function for calculator
void calculator()
{
    int a, b, c, n, r;
    int x = 1;
    cout << "\n\n1. Sum of 2 nums\t2. Diff. of 2 nums\n3. Factorial\t4. Permutation\n5. Combination\t6. sum of n numbers\n7.Exit\n\n";
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
            cout << "\nValue of n:";
            cin >> n;
            cout << "\nValue of r:";
            cin >> r;
            if (n > r && n != 0 && r != 0)
            {
                cout << n << "P" << r << " = " << permun(n, r);
                x = 2;
            }
            else
                x = 1;
        }
        break;
    case 5:
        while (x == 1)
        {
            cout << "\nValue of n:";
            cin >> n;
            cout << "\nValue of r:";
            cin >> r;
            if (n > r && n != 0 && r != 0)
            {
                cout << n << "C" << r << " = " << combin(n, r);
                x = 2;
            }
            else
                x = 1;
        }
        break;
    case 6:
        int stpcnt, ininum, finnum, summit;
        cout << "\nGive us the following:\n";
        cout << "1. Initial Number\n";
        cin >> ininum;
        cout << "2. Final Number\n";
        cin >> finnum;
        cout << "3. Steps\n";
        cin >> stpcnt;
        summit = summan(ininum, finnum, stpcnt);
        printf("\nThe sum of numbers from %d to %d with %d as step is %d", ininum, finnum, stpcnt, summit);
        break;
    default:
        exit(0);
        break;
    }
}

int main()
{
    int a, j = 1;
    cout << "\nwhat you want\n\n1.\tCalculator\n2.\tNothing\n\n\n";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "\n\n";
        while (j == 1)
        {
            calculator();
        }
        break;
    default:
        exit(0);
    }
    return 0;
}
