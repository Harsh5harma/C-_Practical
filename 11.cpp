// Created by harsh on 01/03/22.
// WAP that prints a table indicating the number of occurrences of each alphabet in the text
//entered as command line arguments.

#include <string>
#include <iostream>
#include <algorithm> //for std::sort
#include <vector>

int main()
{
    std::string string{};
    std::cout << "Enter text: ";
    std::cin >> string;

    std::vector<char> alphabets{};
    std::vector<int> occurences{};

    int count{ 1 };
    std::sort(string.begin(), string.end()); //sorting the string

    int len = static_cast<int>(string.size());

    for (int i{ 0 }; i < len; ++i)
    {
        if (string[i] == string[i + 1])
            ++count;
        else
        {
            alphabets.push_back(string[i]);
            occurences.push_back(count);
            count = 1;
        }
    }

    for (int i{ 0 }; i < occurences.size(); ++i)
    {
        std::cout << "Alphabet " << alphabets[i] << " appears " << occurences[i] << " times.\n";
    }

    return 0;
}

