// Created by harsh on 01/03/22.
//

#include <iostream>

int main()
{
    int n{},sum{};
    std::cout<<"Enter the number of elements: ";
    std::cin>>n;

    int *arr = new int[n];

    std::cout<<"Enter the elements: ";
    for (int i{0};i<n;++i)
    {
        int x{};
        std::cin>>x;
        arr[i]=x;
        sum+=x;
    }

    std::cout<<"The sum of the elements is: "<<sum;
    delete[] arr;
    return 0;
}

