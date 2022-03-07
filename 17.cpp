// Created by harsh on 01/03/22.
//Given two ordered arrays of integers, write a program to merge the two-arrays to get
//an ordered array.

#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

void elements(std::vector<int>& array,int size)
{
    for (int i{0};i<size;++i)
    {
        int x{};
        std::cin>>x;
        array.push_back(x);
    }
}
int main()
{
    std::cout<<"Enter sizes of arrays. ";
    int size1{}, size2{};
    std::cin>>size1>>size2;

    std::vector<int> array1, array2;
    std::cout<<"Enter elements of array 1. ";
    elements(array1, size1);
    std::cout<<"Enter elements of array 2: ";
    elements(array2, size2);

    std::set<int> AR1{},AR2{};

    AR1.insert(array1.begin(),array1.end());
    AR2.insert(array2.begin(), array2.end());

    AR1.insert(AR2.begin(), AR2.end());

    std::cout<<"The merged array is: ";
    for (auto i:AR1)
        std::cout<<i<<' ';

    return 0;
}

