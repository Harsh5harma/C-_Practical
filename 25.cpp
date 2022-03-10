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
    std::ofstream fout;
    fout.open("StudentData.txt");

    for (int i{1};i<=3;++i)
    {
        std::cout<<"\nStudent "<<i<<'\n';
        std::cout<<"Enter Rollnum: ";
        std::cin>>S[i].rollNum;
        std::cout<<"Enter Name: ";
        std::cin>>S[i].name;
        std::cout<<"Enter Class: ";
        std::cin>>S[i].Class;
        std::cout<<"Enter the Year: ";
        std::cin>>S[i].year;
        std::cout<<"Enter the Total Marks: ";
        std::cin>>S[i].Tmarks;
        fout<<S[i].rollNum<<" "<<S[i].name<<" "<<S[i].Class<<" "<<S[i].year
        <<" "<<S[i].Tmarks;
    }
    fout.close();

    return 0;
}