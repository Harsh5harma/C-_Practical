// Created by harsh on 01/03/22.
//  WAP to calculate Factorial of a number (i)using recursion, (ii) using iteration
#include <iostream>

void factorial(int n)
{
    int fact{1};
    for (int i{1};i<=n;++i)
    {
        fact*=i;
    }
    std::cout<<"The factorial of first number is: "<<fact<<'\n';
}

int factorialRecursion(int n)
{
    if (n==1)
        return 1;
    else
    {
        return factorialRecursion(n-1)*n;
    }
}
int main()
{
    std::cout<<"Enter two numbers: ";
    int a{},b{};
    std::cin>>a>>b;
    factorial(a);
    std::cout<<"Factorial of second number with recursion is: "<<factorialRecursion(b);
    return 0;
}

