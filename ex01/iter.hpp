/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:21:30 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/23 15:04:56 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(T const &))
{
    for (int i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void    print(T const &x)
{
    std::cout << x << std::endl;
}

#endif
