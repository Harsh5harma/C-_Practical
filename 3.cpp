//
// Created by harsh on 01/03/22.
//WAP to compute the sum of the first n terms of the following series
//S = 1+1/2+1/3+1/4+......
#include <iostream>

int main()
{
    double sum{0};
    int terms{};
    std::cout<<"Enter the number of terms: ";
    std::cin>>terms;

    for (int i{1};i<=terms;++i)
    {
        double term = 1/static_cast<double>(i);
        sum+=term;
    }
    std::cout<<"The sum of the series is: "<<sum;
}

