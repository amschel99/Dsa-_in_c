#include <iostream>

/*We are going to write a program to sum numbers between m-n, using loops first then recursion*/
int find_sum_loops(int m, int n)
{
    int sum = 0;
    for (m; m <= n; m++)
    {
        sum += m;
    }
    return sum;
}
int recursive_sum(int m, int n)
{
    if (m == n)
    {
        return m;
    }
    return m + recursive_sum(m + 1, n);
}
int main()
{

    int m, n;
    std::cout << "enter m please" << std::endl;
    std::cin >> m;
    std::cout << "enter n please" << std::endl;
    std::cin >> n;
    ;
    std::cout << "the sum of numbers between " << m << " and  " << n << " is " << find_sum_loops(m, n) << std::endl;
    std::cout << "the sum of numbers between " << m << " and  " << n << " using recursion  is " << recursive_sum(m, n) << std::endl;
    return 0;
}