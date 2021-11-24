/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:21:04 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/24 20:51:57 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_MUTANTSTACK_HPP_
#define EX02_MUTANTSTACK_HPP_

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef
        typename std::stack<T>::container_type::const_iterator const_iterator;

    MutantStack() : std::stack<T>() {}
    virtual ~MutantStack() {}
    MutantStack(MutantStack const& src) : std::stack<T>(src) {}

    MutantStack& operator=(MutantStack const& rhs) {
        if (this != &rhs) {
            std::stack<T>::operator=(rhs);
        }
        return *this;
    }

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};

#endif  // EX02_MUTANTSTACK_HPP_
