/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:27:18 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/18 04:38:39 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <deque>
#include <iostream>
#include <map>
#include <set>
#include <vector>

#include "easyfind.hpp"

template <typename T>
void runEasyFind(T const& container, int needle) {
    try {
        typename T::const_iterator begin = container.begin();
        typename T::const_iterator itr = easyfind(container, needle);
        std::cout << "Index: " << std::distance(begin, itr);
        std::cout << ", Valume: " << *itr << std::endl;
    } catch (std::exception& err) {
        std::cout << "error: " << err.what() << ": "
                  << "not found" << std::endl;
    }
}

int main() {
    {
        std::cout << "< vector test >" << std::endl;
        std::vector<int> v(10);
        for (int i = 0; i < static_cast<int>(v.size()); i++) {
            v[i] = i;
        }

        runEasyFind(v, 0);
        runEasyFind(v, 1);
        runEasyFind(v, 10);
        std::cout << std::endl;
    }

    {
        std::cout << "< deque test >" << std::endl;
        std::deque<int> dq(0);
        dq.push_front(1);
        dq.push_front(2);
        dq.push_back(3);

        runEasyFind(dq, 1);
        runEasyFind(dq, 2);
        runEasyFind(dq, 3);
        runEasyFind(dq, -1);
        std::cout << std::endl;
    }

    {
        std::cout << "< set test >" << std::endl;
        std::set<int> s;
        s.insert(2);
        s.insert(2);
        s.insert(2);
        s.insert(1);

        runEasyFind(s, 2);
        runEasyFind(s, 1);
        runEasyFind(s, 100);
    }
    return 0;
}
