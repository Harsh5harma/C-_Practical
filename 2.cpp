//
// Created by harsh on 01/03/22.
//WAP to reverse a number.
#include <iostream>
int main()
{
    std::cout << "Enter a number you want to reverse: ";
    int num{};
    std::cin >> num;
    std::cout << "The reversed number is: ";
    while (num > 0)
    {
        int digit = num%10;
        std::cout<<digit;
        num/=10;
    }
    return 0;
}

