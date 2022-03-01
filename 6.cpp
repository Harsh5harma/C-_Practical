// Created by harsh on 01/03/22.
//Write a function to find whether a given no. is prime or not. Use the same to generate
//the prime numbers less than 100.

#include <iostream>
#include <cmath>
bool isPrime(int number)
{
    for (int i{ 2 }; i <= sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
        else
            continue;

    }
    return true;
}
int main()
{
    int number{};
    std::cout << "Enter last term: ";
    std::cin>>number;

    //prints prime Numbers upto 100
    for (int i{2};i<number;++i)
    {
        if (isPrime(i))
            std::cout << i<<" is prime.\n";
        else
            continue;
    }
    return 0;
}