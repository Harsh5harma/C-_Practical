//
// Created by harsh on 01/03/22.
//

#include <iostream>

void reverseArray(int array[],int size)
{
    int start{0};
    int end{size-1};

    while(start<end)
    {
       int temp= array[start];
       array[start]=array[end];
       array[end]=temp;
       ++start;
       --end;
    }
    for (int i{0};i<size;++i)
        std::cout<<array[i]<<' ';

}

int main()
{
    int array[256];
    std::cout<<"Enter the size of the array: ";
    int size{};
    std::cin>>size;

    std::cout<<"Enter array elements: ";
    for (int i{0};i<size;++i)
        std::cin>>array[i];
    std::cout<<"Array elements you entered are: ";
    for (int i{0};i<size;++i)
        std::cout<<array[i]<<' ';
    std::cout<<"\nThe array after being reversed is: ";
    reverseArray(array,size);
    return 0;
}