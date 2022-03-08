// Created by harsh on 01/03/22.
// WAP to display Fibonacci series (i)using recursion, (ii) using iteration

#include <iostream>

void fibs(int n)
{
    int a{1}, b{1};
    for (int i{0};i<n;++i)
    {
        std::cout<<a<<' '<<b<<' ';
        a=a+b;
        b=a+b;
    }
}

int fibsRecursion(int a)
{

   if (a==0)
       return 0;
   else if (a==1)
       return 1;
   else
       return (fibsRecursion(a-1)+ fibsRecursion(a-2));
}
int main()
{
    std::cout<<"Doing Fibonacci series with iteration.";
    fibs(5);

    std::cout<<"\nNow doing fibonacci series with recursion. \nEnter the number of terms: ";
    int n{};
    std::cin>>n;
    for (int i{1};i<=n;++i)
    {
        std::cout<<fibsRecursion(i)<<' ';
    }
    return 0;
}