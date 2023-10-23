/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:21:23 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/23 15:05:37 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    std::string str[] = {"Hello", "World", "!"};
    iter(arr, 5, print<int>);
    iter(str, 3, print<std::string>);
    return (EXIT_SUCCESS);
}
