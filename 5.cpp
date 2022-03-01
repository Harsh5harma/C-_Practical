//
// Created by harsh on 01/03/22.
// Write a function that checks whether a given string is Palindrome or not. Use this
//function to find whether the string entered by user is Palindrome or not.

#include <iostream>
#include <string>

void checkPalindrome(std::string& string)
{
    int max = static_cast<int>(string.size())-1;
    int min{0};

    while(min<=max)
    {
        if(string[min]==string[max])
        {
            ++min;
            --max;
        }
        else
        {
            std::cout<<string<<" is not a palindrome.\n";
            return;
        }
    }
    std::cout<< string<<" is a palindrome. \n";
}
int main()
{
    std::string string{};
    std::cout<<"Enter a string: ";
    std::cin>>string;
    checkPalindrome(string);
    std::cout<<"Enter another string: ";
    std::string string2{};
    std::cin>>string2;
    checkPalindrome(string2);
    return 0;
}
