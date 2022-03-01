// Created by harsh on 01/03/22.
// WAP to print a triangle of stars as follows (take number of lines from user):
//*
//***
//*****
//*******
//*********

#include <iostream>

int main()
{
    int rows{};
    std::cout<<"Enter the number of rows: ";
    std::cin>>rows;

    for (int current_row{0};current_row<rows;++current_row)
    {
        int cols = current_row*2+1;
        for (int i{1};i<=cols;++i)
            std::cout<<"*";
        std::cout<<'\n';
    }
    return 0;
}

