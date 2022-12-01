/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:12:00 by plpelleg          #+#    #+#             */
/*   Updated: 2022/12/01 20:12:51 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"

int main ()
{
    std::cout << std::endl;
    Form        form_prova("Modulo 1", 224, 1);
    Bureaucrat  j("Julius", 15);
    Bureaucrat  a("Andrew", 24);
    try
    {
        std::cout << form_prova << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    std::cout << "First attempt by ";
    std::cout << a;
    a.signForm(form_prova);
    std::cout << std::endl;
    std::cout << "Second attempt by ";
    std::cout << j;
    j.signForm(form_prova);
    std::cout << std::endl;
    return (0);
}