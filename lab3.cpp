#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;

    return a, b;
}

float BMI(float m, float h)
{
    float bmi;
    bmi = m / (h * h);
    cout << bmi;
    return bmi;
}

int sumUpTon(int n)
{
    int Tong = 0;
    for (int i = 1; i < n + 1; i++)
    {
        Tong += i;
    }
    cout << Tong;
    return Tong;
}

int factorial(int n)
{
    int Tich = 1;
    for (int i = 1; i < n + 1; i++)
    {
        Tich *= i;
    }
    cout << Tich;
    return Tich;
}

int fibonacci(int n)
{
    int fibo = 0;
    int f1 = 0;
    int f2 = 1;
    if (n > 1)
    {
        for (int i = 2; i < n + 1; i++)
        {
            fibo = f1 + f2;
            f1 = f2;
            f2 = fibo;
        }
        cout << fibo;
    }
    else if (n == 1)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    return fibo;
}

bool isPerfectSquare(int n)
{
    int counter = 0;
    for (int i = 1, i < 3 * (n + 1) / 4, i++)
    {
        if (n == i * i)
        {
            counter += 1;
        }
    }
}

int main()
{
    // int x, y;
    // cin >> x >> y;
    // swap(x, y);
    // cout << x << y;

    // float a, b;
    // cin >> a >> b;
    // BMI(a, b);

    // int n;
    // cin >> n;
    //  sumUpTon(n);
    //  factorial(n);
    // fibonacci(n);

    return 0;
}