/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:31:02 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/24 21:51:01 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>

#include "mutantStack.hpp"

template <typename T>
void outputMutantStack(MutantStack<T> mStack) {
    std::cout << "mStack: ";
    for (typename MutantStack<T>::iterator it = mStack.begin();
         it != mStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void _test() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    outputMutantStack(mstack);
    std::cout << "stack.top(): " << mstack.top() << std::endl;
    std::cout << std::endl;

    mstack.pop();

    outputMutantStack(mstack);
    std::cout << "stack.size(): " << mstack.size() << std::endl;
    std::cout << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    outputMutantStack(mstack);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << "*it: " << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;

    outputMutantStack(mstack);
    MutantStack<int>::const_iterator const_it = mstack.begin();
    MutantStack<int>::const_iterator const_ite = mstack.end();
    ++const_it;
    --const_it;
    while (const_it != const_ite) {
        std::cout << "*it: " << *const_it << std::endl;
        ++const_it;
    }
    std::cout << std::endl;

    std::stack<int> s(mstack);
    std::cout << "stack top: " << s.top() << std::endl;
    std::cout << "stack size: " << s.size() << std::endl;
}

int main() {
    _test();
    return 0;
}
