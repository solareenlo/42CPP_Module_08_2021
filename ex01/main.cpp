/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 07:16:25 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/24 07:28:42 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

#include "span.hpp"

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

int main() {
    std::srand(time(NULL));

    std::cout << "< Test normal >" << std::endl;
    _test(10);
    std::cout << std::endl;

    std::cout << "< Test null >" << std::endl;
    _test(0);
    std::cout << std::endl;

    std::cout << "< Test one >" << std::endl;
    _test(1);
    return 0;
}
