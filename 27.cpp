// Created by harsh on 01/03/22.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream Fin{};
    std::ofstream Fout{};

    Fin.open("Student_Data.txt");
    Fout.open("DataWithoutSpaces.txt");

    std::string str{};

    while (std::getline(Fin,str))
    {
        for (int i{0};i<str.length();++i)
        {
            if (str[i]!=' ')
                Fout<<str[i];
        }
        Fout<<'\n';
    }
    Fin.close();
    Fout.close();

    return 0;
}

