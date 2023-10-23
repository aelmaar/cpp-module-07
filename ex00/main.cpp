/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:07:14 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/23 13:11:34 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    // create some tests for swap and min/max
    int a = 2;
    int b = 3;
    swap<int>(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << min<int>(a, b) << std::endl;
    std::cout << max<int>(a, b) << std::endl;
    
    return (0);
}
