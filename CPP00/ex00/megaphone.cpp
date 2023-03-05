/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abartell <abartell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:02:54 by abartell          #+#    #+#             */
/*   Updated: 2023/03/05 01:06:08 by abartell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//library that defines the standart input/outout stream objects
//used for cout here
#include <iostream>
//defines several general purpose functions like memory managements,
//random number generation etc. Includes things like atoi, malloc,
//calloc, free, exit, EXIT_SUCESS etc. 
#include <cstdlib>

#define FEEDBACK "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << FEEDBACK << std::endl;
    }
    else
    {
        std::string str;
        for (int i = 1; i < ac; i++)
        {
            str.append(av[i]);
            str.append(" ");
        }
        if (!str.empty() && str[str.length()-1] == ' ')
        {
            str.erase(str.length()-1);
        }
        for (std::string::iterator it = str.begin(); it != str.end(); it++)
        {
            std::cout << (char)toupper(*it);
        }
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}

//str.length returns the number of characters in the string and in the case of
//this function checks if its a space
//str.erase removes a portion of the string, in this case a space
//str.begin and .end return iterators pointing to the start and end
//toupper is used to appends the uppercase character to str
//predefined output for no input (FEEDBACK)
//finishing program with std::cout and std::endl