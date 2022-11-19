#include <iostream>
using namespace std;
/*the program below demonstrates how to find the factorial of any number using loops and also recursion
 */
int compute_factorial(int n)
{
    int factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial *= i;
    }
    return factorial;
}
int factorial_by_recursion(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n * factorial_by_recursion(n - 1);
}
int main()
{
    int n;

    cout << "enter a number" << endl;
    cin >> n;
    cout << "the factorial of " << n << " is " << compute_factorial(n) << endl;
    cout << "the factorial of " << n << " by recursion  is " << factorial_by_recursion(n) << endl;
}