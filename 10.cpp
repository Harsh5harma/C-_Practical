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
int Max(int array[],int size)
{
    int max{array[0]};
    for (int i{0};i<size;++i)
    {
        if (array[i]>max)
            max = array[i];
    }
    return max;
}
int Min(int array[],int size)
{
    int min{array[0]};
    for (int i{0};i<size;++i)
    {
        if (array[i]<min)
            min = array[i];
    }
    return min;
}
void createArray(int array[],int size)
{
    std::cout<<"Enter Array Elements: ";
    for (int i{0};i<size;++i)
    {
        std::cin>>array[i];
    }
}
void printMenu()
{
    std::cout<<"Choose your option: \n";
    std::cout<<"0)Enter 00 to exit.\n"
               "1) Print the even-valued elements\n"
               "2) Print the odd-valued elements\n"
               "3) Calculate and print the sum and average of the elements of array\n"
               "4) Print the maximum and minimum element of array\n"
               "5) Remove the duplicates from the array\n"
               "6) Print the array in reverse order\n"
               "7)Enter 7 to Create new array. \n";
}

int main()
{
  int array[1000];
  int size{};
  std::cout<<"Enter size of the array: ";
  std::cin>>size;
  createArray(array,size);
  int min{Min(array,size)}, max{Max(array,size)};
  int keyArray[1000]{0};

  printMenu();
  int option{};
  std::cout<<"Select option: ";
  std::cin>>option;

  while (true)
  {
      if (option ==1)
          printEven(array,size);
      else if (option==2)
          printOdd(array,size);
      else if (option == 3)
          sumAndAvg(array,size);
      else if (option==4)
          std::cout<<"The maximum element in the array is: "<<max<<"\nThe minimum element is: "<<min<<'\n';
      else if (option==5)
          removeDuplicates(array,keyArray,size);
      else if (option == 6)
          printReverse(array,size);
      else if (option==00)
          break;
      else if (option==7)
      {
          std::cout<<"Enter size of new array: ";
          std::cin>>size;
          createArray(array,size);
          std::cout<<"New array made...\n";
      }

      std::cout<<"\nEnter next option: ";
      std::cin>>option;
  }
  return 0;
}

