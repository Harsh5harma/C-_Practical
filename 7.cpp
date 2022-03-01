// Created by harsh on 01/03/22.
//WAP to compute the factors of a given number.

#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int number{};
    std::cin >> number;

    for (int i{ 1 }; i < number; ++i)
    {
        if (number % i == 0)
            std::cout << i << " is a factor of " << number<<'\n';
        else
            continue;
    }
    return 0;
}

