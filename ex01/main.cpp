/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 07:16:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/24 08:30:56 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "span.hpp"

void _test() {
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

void _test(int n) {
    try {
        int mod = 1000000007;

        Span sp = Span(n);
        for (int i = 0; i < n; i++) {
            sp.addNumber(std::rand() % mod);
        }

        std::cout << "Sortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;

        sp.addNumber(10);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

void _testRange() {
    try {
        Span sp = Span(16);
        std::vector<int> vec(10, 100);
        sp.addNumbers(vec.begin(), vec.begin() + 5);
        std::cout << "Sortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;

        std::vector<const int> vec2(10, 200);
        sp.addNumbers(vec2.begin(), vec2.end());
        std::cout << "Sortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;

        sp.addNumber(10);
        std::cout << "Sortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;

        sp.addNumber(10);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    std::srand(time(NULL));

    std::cout << "< Test normal >" << std::endl;
    _test();
    std::cout << std::endl;

    std::cout << "< Test full >" << std::endl;
    _test(20000);
    std::cout << std::endl;

    std::cout << "< Test null >" << std::endl;
    _test(0);
    std::cout << std::endl;

    std::cout << "< Test one >" << std::endl;
    _test(1);
    std::cout << std::endl;

    std::cout << "< Test range >" << std::endl;
    _testRange();
    return 0;
}
