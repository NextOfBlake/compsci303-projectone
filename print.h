#ifndef MIDTERM_PRINT_H
#define MIDTERM_PRINT_H

#include <iostream>

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
}

#endif //MIDTERM_PRINT_H
