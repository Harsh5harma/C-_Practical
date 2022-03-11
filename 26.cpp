// Created by harsh on 01/03/22.
//
#include <iostream>
#include <fstream>
#include <string>

struct Student
{
    int rollNum{};
    std::string name{};
    std::string Class{};
    int year{};
    int Tmarks{};
};
int main()
{
    Student S[3];
    std::ifstream Fin;
    Fin.open("StudentData.txt");

    for (int i{1};i<=10;++i)
    {
        Fin>>S[i].rollNum>>S[i].name>>S[i].Class>>S[i].year>>S[i].Tmarks;

        std::cout<<"\nStudent: "<<i<<'\n';
        std::cout<<"Roll No. "<<S[i].rollNum<<'\n';
        std::cout<<"Name: "<<S[i].name<<'\n';
        std::cout<<"Marks: "<<S[i].Tmarks<<'\n';
    }
    Fin.close();

    return 0;
}