/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:29:31 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/18 04:37:17 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_EASYFIND_HPP_
#define EX00_EASYFIND_HPP_

#include <algorithm>
#include <iostream>

template <typename T>
typename T::const_iterator easyfind(T const& container, int to_find) {
    typename T::const_iterator itr =
        std::find(container.begin(), container.end(), to_find);

    if (itr == container.end()) {
        throw std::exception();
    }
    return itr;
}

#endif  // EX00_EASYFIND_HPP_
