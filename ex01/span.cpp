/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 06:31:40 by tayamamo          #+#    #+#             */
/*   Updated: 2021/11/24 18:32:03 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : N_(0), v_() {}
Span::Span(unsigned int N) : N_(N), v_() {}
Span::~Span() {}

Span::Span(Span const& src) : N_(src.N_), v_(src.v_) {}

Span& Span::operator=(Span const& rhs) {
    if (this != &rhs) {
        this->N_ = rhs.N_;
        this->v_.clear();
        this->v_ = rhs.v_;
    }
    return *this;
}

void Span::addNumber(int num) {
    if (this->getSize() == this->getN()) {
        throw Span::SpanIsFullException();
    }
    this->v_.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin,
                     std::vector<int>::iterator end) {
    for (std::vector<int>::iterator itr = begin; itr != end; itr++) {
        if (this->getSize() == this->getN()) {
            throw Span::SpanIsNullException();
        }
        this->v_.push_back(*itr);
    }
}

void Span::addNumber(std::vector<int>::const_iterator begin,
                     std::vector<int>::const_iterator end) {
    for (std::vector<int>::const_iterator itr = begin; itr != end; itr++) {
        if (this->getSize() == this->getN()) {
            throw Span::SpanIsNullException();
        }
        this->v_.push_back(*itr);
    }
}

int Span::shortestSpan() const {
    if (this->v_.size() == 0) {
        throw Span::SpanIsNullException();
    }
    if (this->v_.size() == 1) {
        throw Span::SpanIsOneException();
    }

    std::vector<int> copy = this->getVec();
    std::sort(copy.begin(), copy.end());
    int mini = std::numeric_limits<int>::max();
    for (int i = 0; i < static_cast<int>(copy.size()) - 1; i++)
        mini = std::min(mini, copy[i + 1] - copy[i]);
    return (mini);
}

int Span::longestSpan() const {
    if (this->v_.size() == 0) {
        throw Span::SpanIsNullException();
    }
    if (this->v_.size() == 1) {
        throw Span::SpanIsOneException();
    }

    std::vector<int> copy = this->getVec();
    std::sort(copy.begin(), copy.end());
    return (copy.back() - copy.front());
}

char const* Span::SpanIsFullException::what() const throw() {
    return "Span is full";
}

char const* Span::SpanIsNullException::what() const throw() {
    return "There's no number";
}

char const* Span::SpanIsOneException::what() const throw() {
    return "There's only one number";
}

unsigned int Span::getN() const { return this->N_; }
unsigned int Span::getSize() const { return this->v_.size(); }
std::vector<int> Span::getVec() const { return this->v_; }
