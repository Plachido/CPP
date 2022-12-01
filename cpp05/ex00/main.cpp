/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:34:09 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/28 22:52:32 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

int main(void)
{
    Bureaucrat bur("Pollo", 10);
    try
    {
        Bureaucrat bur2("Pollo", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat bur2("Pollo", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << bur << std::endl;
    bur.incrementGrade(5);
    std::cout << bur << std::endl;
    try
    {
        bur.decrementGrade(9);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << bur << std::endl;
    try
    {
        bur.decrementGrade(145);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << bur << std::endl;
    try
    {
        bur.decrementGrade(90);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << bur << std::endl;
    return (0);
}