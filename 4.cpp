
// Created by harsh on 01/03/22.
//WAP to compute the sum of the first n terms of the following series
//S =1-2+3-4+5

#include <iostream>

int main()
{
    std::cout << "Enter number of terms: ";
    int n{};
    std::cin >> n;
    int sum{};
    for (int i{ 0 }; i <= n; ++i)
        sum += i;
    std::cout << "Sum is: " << sum;
    return 0;
}