#ifndef MIDTERM_PRINT_H
#define MIDTERM_PRINT_H

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

#if __cplusplus >= 201703L
#define __CONSTEXPR constexpr
#else
#define __CONSTEXPR
#endif

namespace console {
    template<char end = '\n', char sep = ' '>
    inline void print() {
        if __CONSTEXPR (end != 0)
            std::cout << end;
    }

    template<char end = '\n', char sep = ' ', class T>
    inline void print(const T& arg) {
        std::cout << arg;
        if __CONSTEXPR (end != 0)
            std::cout << end;
    }

    template<char end = '\n', char sep = ' ', class T1, class... Tn>
    inline void print(const T1& first, const Tn&... others) {
        std::cout << first;
        if __CONSTEXPR (sep != 0)
            std::cout << sep;
        print<end, sep>(others...);
    }

    template<typename T>
    inline T input()
    {
        T input;
        std::cin >> input;
        return input;
    }

    inline std::vector<std::string> inputWords()
    {
        std::vector<std::string> words;
        std::string word;
        char input[100];

        while(getchar() != '\n');

        scanf("%[^\n]%*c", input);
        std::string strInput(input);

        for(auto letter : strInput)
        {
            word.push_back(letter);
            if(letter == ' ' || letter == strInput[strInput.size() - 1])
            {
                words.emplace_back(word);
                word = "";
            }
        }

        return words;
    }

    inline void printWords(std::vector<std::string> words)
    {
        for(auto word : words)
            std::cout << word;
        std::cout << std::endl;
    }
}

#endif //MIDTERM_PRINT_H
