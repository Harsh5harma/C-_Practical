// Created by harsh on 01/03/22.
//WAP to calculate GCD of two numbers (i) with recursion (ii) without recursion.

#include <iostream>

int gcd(int num1, int num2) //gcd without recursion
{
    int large = (num1 > num2) ? num1 : num2;
    int gcd{};

    for (int i{ 1 }; i <= large; ++i)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
            gcd = i;
    }
    return gcd;
}

int gcdRecursion(int large, int small,int count) //gcd with recursion
{
    if ((large % count == 0)&&(small % count==0))
        return count;
    else
        gcdRecursion(large, small, count-1);

}



int main()
{
    int num1{}, num2{};
    std::cout << "Enter two numbers separated by a space: ";
    std::cin >> num1 >> num2;

    int GCD1{gcd(num1,num2)};

    std::cout << "The GCD of the numbers without recursion is: " << GCD1<<'\n';

    int large = (num1 > num2) ? num1 : num2;
    int small = (num1 < num2) ? num1 : num2;
    int count = small;

    std::cout << "The GCD of two numbers with recursion is: " << gcdRecursion(large, small,count);
    return 0;
}