// Created by harsh on 01/03/22.
// Write a program in which a function is passed address of two variables and then alter its
//contents.

#include <iostream>

void modifyByAddress(int& a, int& b)
{
    a=a*2;
    b=b*3;
}

int main()
{
    std::cout<<"Enter two numbers: ";
    int a{},b{};
    std::cin>>a>>b;
    std::cout<<"a: "<<a<<" and b: "<<b<<" before getting modified.\n";

    modifyByAddress(a,b);

    std::cout<<"a: "<<a<<" and b: "<<b<<" after getting modified.";
    return 0;
}
