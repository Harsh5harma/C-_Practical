// Created by harsh on 01/03/22.
//Write a macro that swaps two numbers. WAP to use it.

#include <iostream>
#define SWAP(a,b){int temp; temp = a; a=b; b = temp;}

int main()
{
    std::cout<<"Enter two Numbers: ";
    int a{},b{};
    std::cin>>a>>b;

    SWAP(a,b);

    std::cout<<"a is now: "<<a<<" b is now: "<<b;
    return 0;

}

