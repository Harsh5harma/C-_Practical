// Created by harsh on 01/03/22.
// Write a program that swaps two numbers using pointers.

#include <iostream>

void swap(int* a, int* b)
{
    int temp1{};
    temp1 = *a;
    *a=*b;
    *b = temp1;
}

int main()
{
    std::cout<<"Enter two numbers you want to swap: ";
    int a{};
    int b{};
    std::cin>>a>>b;
    swap(&a,&b);
    std::cout<<"a is: "<<a<<" b is: "<<b;

    return 0;
}

