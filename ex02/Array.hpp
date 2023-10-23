/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:21:10 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/23 15:34:36 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int len;
    public:
        Array(void) : array(NULL), len(0) {}
        Array(unsigned int n) : array(new T[n]), len(n) {}
        Array(Array const &src) : array(NULL), len(0) { *this = src; }
        ~Array(void) { delete [] array; }
        Array &operator=(Array const &src)
        {
            if (this != &src)
            {
                delete [] array;
                len = src.len;
                array = new T[len];
                for (unsigned int i = 0; i < len; i++)
                    array[i] = src.array[i];
            }
            return (*this);
        }
        T &operator[](unsigned int i)
        {
            if (i >= len)
                throw std::exception();
            return (array[i]);
        }
        unsigned int size(void) const { return (len); }
};

#endif
