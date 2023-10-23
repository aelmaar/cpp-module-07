/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:19:08 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/23 17:12:17 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> arr(5);
    Array<std::string> str(3);
    try
    {
        for (unsigned int i = 0; i < arr.size(); i++)
            arr[i] = i;
        for (unsigned int i = 0; i < str.size(); i++)
            str[i] = "Hello";
        for (unsigned int i = 0; i < arr.size(); i++)
            std::cout << arr[i] << std::endl;
        for (unsigned int i = 0; i < str.size(); i++)
            std::cout << str[i] << std::endl;
        std::cout << arr[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": " << "Out of range" << std::endl;
    }
    
    return (EXIT_SUCCESS);
}
