//
// Created by harsh on 01/03/22.
// WAP to print the sum and product of digits of an integer.
#include <iostream>

int main()
{
    int number{};
    std::cout<<"Enter number: ";
    std::cin>>number;
    int product{1}, sum{0}, number_copy{number};

    while(number_copy>0)
    {
        int digit = number_copy%10;
        product*=digit;
        sum+=digit;
        number_copy /=10;
    }
    std::cout<<"The sum of the digits of "<<number<<" is: "<<sum<<'\n';
    std::cout<<"The product of the digits of "<<number<<" are: "<<product;

    return 0;
}
