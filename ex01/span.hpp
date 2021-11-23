/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 06:06:28 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/24 07:29:34 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX01_SPAN_HPP_
#define EX01_SPAN_HPP_

#include <algorithm>
#include <exception>
#include <limits>
#include <vector>

class Span {
 public:
    Span();
    explicit Span(unsigned int N);
    virtual ~Span();
    Span(Span const& src);

    Span& operator=(Span const& rhs);

    void addNumber(int num);
    int shortestSpan() const;
    int longestSpan() const;

    class SpanIsFullException : public std::exception {
     public:
        char const* what() const throw();
    };

    class SpanIsNullException : public std::exception {
     public:
        char const* what() const throw();
    };

    class SpanIsOneException : public std::exception {
     public:
        char const* what() const throw();
    };

 private:
    unsigned int N_;
    std::vector<int> v_;

    unsigned int getN() const;
    unsigned int getSize() const;
    std::vector<int> getVec() const;
};

#endif  // EX01_SPAN_HPP_
