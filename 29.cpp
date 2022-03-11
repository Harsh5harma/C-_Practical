// Created by harsh on 01/03/22.

#include <iostream>

int main()
{
    std::cout<<"Enter 10 array elements: ";
    int array[10];
    for (int i{0};i<10;++i)
        std::cin>>*(array+i);

    std::cout<<"The array you entered is: ";
    for (int i{0};i<10;++i)
        std::cout<<*(array+i)<<' ';

    int* ptr = array;
    for (int i{0};i<10;++i)
    {
        for (int j{i+1};j<10;++j)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                int Temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = Temp;
            }
        }
    }

    std::cout<<"\nArray in ascending order: ";
    for (int i{0};i<10;++i)
        std::cout<<*(array+i)<<' ';

    for (int i{0};i<10;++i)
    {
        for (int j{i+1};j<10;++j)
        {
            if(*(ptr+i)<*(ptr+j))
            {
                int Temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = Temp;
            }
        }
    }
    std::cout<<"\nArray in descending order: ";
    for (int i{0};i<10;++i)
        std::cout<<*(array+i)<<' ';
    return 0;


    return 0;
}

