// Created by harsh on 01/03/22.
//10. WAP to perform following actions on an array entered by the user:
//i) Print the even-valued elements
//ii) Print the odd-valued elements
//iii) Calculate and print the sum and average of the elements of array
//iv) Print the maximum and minimum element of array
//v) Remove the duplicates from the array
//vi) Print the array in reverse order

#include <iostream>

void printEven(int array[],int size)
{
    std::cout<<"Printing Even Elements...\n";
    for (int i{0};i <size;++i)
    {
        if (array[i]%2==0)
            std::cout<<array[i]<<' ';
    }
    std::cout<<'\n';
}
void printOdd(int array[],int size)
{
    std::cout<<"Printing Odd Elements...\n";

    for (int i{0};i <size;++i)
    {
        if (array[i]%2!=0)
            std::cout<<array[i]<<' ';
    }
    std::cout<<'\n';
}
void printReverse(int array[],int size)
{
    std::cout<<"The reverse of the array is: ";
    for (int i{size-1};i>=0;--i)
        std::cout<<array[i]<<' ';
    std::cout<<'\n';
}
void sumAndAvg(int array[],int size)
{
    double sum{};

    for (int i{0};i<size;++i)
        sum+=array[i];

    std::cout<<"The sum of the array elements is: "<<sum<<'\n';
    double average = sum/size;
    std::cout<<"The average of the array elements is: "<<average<<'\n';
}
void removeDuplicates(int array[],int keyArray[],int size)
{
    std::cout<<"The array with duplicates removed is: ";
    for (int i{0};i<size;++i)
    {
        keyArray[array[i]]+=1;
    }

    for (int i{0};i<size;++i)
    {
        if (keyArray[array[i]]>=1)
        {
            std::cout<<array[i]<<' ';
            keyArray[array[i]]=0;
        }
        else
            continue;
    }
    std::cout<<'\n';
}
int main()
{
    int array[100];
    int size{};
    std::cout<<"Enter the size of the array: ";
    std::cin>>size;
    int max{0}, min{0};
    //inputting array and finding max/min;
    for (int i{0};i<size;++i)
    {
        std::cin>>array[i];
        if (array[i]>max)
            max = array[i];
        if (array[i]<min)
            min = array[i];
    }

    int valueKeyArray[max+1];
    printEven(array,size);
    printOdd(array,size);
    sumAndAvg(array,size);
    std::cout<<"The max and min of the array are: "<<max<<" "<<min<<'\n';
    printReverse(array,size);
    removeDuplicates(array,valueKeyArray,size);

    return 0;
}

