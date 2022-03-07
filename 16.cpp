// Created by harsh on 01/03/22.
//Write a menu driven program to perform following operations on strings:
//a) Show address of each character in string
//b) Concatenate two strings without using strcat function.
//c) Concatenate two strings using strcat function.
//d) Compare two strings
//e) Calculate length of the string (use pointers)
//f) Convert all lowercase characters to uppercase
//g) Convert all uppercase characters to lowercase
//h) Calculate number of vowels
//i) Reverse the string

#include <iostream>
#include <cstring>
void showAddress(char string[])
{
    std::cout<<"Printing addresses of each character in the string. \n";
    for (int i{0};string[i]!='\0';++i)
    {
        std::cout<<"The Address of "<<string[i]<<" is: "<<static_cast<void *>(&string[i])<<'\n';
    }
}

void concat(char string1[], char string2[]) {

    int i{0};

    while (string1[i] != '\0')
        i++;
    int j = 0;
    while (string2[j] != '\0')
    {
        string1[i]=string2[j];
        ++i;
        ++j;
    }
    std::cout<<"The string after being concatenated is: "<<string1<<'\n';
}
int size(char string[]);
void compare(char str1[], char str2[]) {

    int max = (size(str1)>size(str2))?size(str1):size(str2);

    for (int i{0};i<max;++i)
    {
        if (str1[i]==str2[i])
            continue;
        else
        {
            std::cout<<"strings are not equal. \n";
            return;
        }
    }
    std::cout<<"Both strings are equal.\n";
}
void concatstr(char str1[], char str2[])
{
    std::cout<<"Using strcat function on strings: "<<strcat(str1, str2)<<'\n';
}

int size(char str[])
{
    int size{0};
    for (char* i{str};*i!='\0';++i)
    {
        ++size;
    }
    return size;
}

void toLower(char string[])
{
    for (int i{0};string[i]!='\0';++i)
    {
        if (isupper(string[i]))
            string[i]=static_cast<char>(tolower(string[i]));
        else
            continue;
    }
    std::cout<<"The string with all characters converted to lowecase is: "<<string<<'\n';
}
void toUpper(char string[])
{
    for (int i{0};string[i]!='\0';++i)
    {
        if (islower(string[i]))
            string[i]=static_cast<char>(toupper(string[i]));
        else
            continue;
    }
    std::cout<<"The string with all characters converted to uppercase is: "<<string<<'\n';
}

void calcVowels(char string[])
{
    int len = size(string);
    int occ{};
    for (int i{0};i<len;++i)
    {
        if (string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
            occ++;
    }
    std::cout<<"Number of vowels in the string are: "<<occ<<'\n';
}

void reverseString(char string[])
{
    int len = size(string);

    for (int i{len-1};i>=0;--i)
        std::cout<<string[i];
    std::cout<<'\n';
}
void printMenu()
{
    std::cout<<"1) Show address of each character in string\n"
               "2) Concatenate two strings without using strcat function.\n"
               "3) Concatenate two strings using strcat function.\n"
               "4) Compare two strings\n"
               "5) Calculate length of the string (use pointers)\n"
               "6) Convert all lowercase characters to uppercase\n"
               "7) Convert all uppercase characters to lowercase\n"
               "8) Calculate number of vowels\n"
               "9) Reverse the string\n";
}
int main() {
    std::cout << "Enter two strings: ";
    char string1[200], string2[200];
    std::cin >> string1 >> string2;
    printMenu();
    int choice{};
    std::cin>>choice;

    if (choice ==1)
        showAddress(string1);
    else if (choice == 2)
        concat(string1, string2);
    else if (choice == 3)
        concatstr(string1, string2);
    else if (choice == 4)
        compare(string1, string2);
    else if (choice == 5)
        std::cout<<"The size of the string "<<string1<<" using pointers is: "<<size(string1)<<'\n';
    else if (choice == 6)
        toLower(string1);
    else if (choice == 7)
        toUpper(string1);
    else if (choice == 9)
        reverseString(string1);
    else if (choice==8)
        calcVowels(string1);
    else
        return 0;

    return 0;
}