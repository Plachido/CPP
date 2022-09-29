/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:01:10 by plpelleg          #+#    #+#             */
/*   Updated: 2022/09/29 18:09:00 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void transcribe_replace(std::ifstream& input, std::ofstream& output, char* original, char* replace)
{
	std::string tmp;
	char c;
	int i;
	int len;
	i = 0;
	len = strlen(original);
	while (input >> std::noskipws >> c)
	{
		if (c == original[i])
		{
			if (i == (len - 1))
			{
				printf("i == len - 1\n");
				output << replace;
				i = -1;
			}
			i++;
		}
		else if (i && i < len -1)
		{
			output.write(original, i);
			i = 0;
		}
		else
		{
			printf("standard writing...\n");
			output << c;
		}
	}
};

int main(int argc, char** argv)
{
	std::string fileNameOutput;
	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	std::ifstream input(argv[1], std::fstream::in);
	if (input.is_open())
    {
		fileNameOutput = std::string(argv[1]) + ".replace";
		std::ofstream output(fileNameOutput, std::fstream::out);
		if (!output.is_open())
        {
			std::cout << "Error creating output file" << std::endl;
            input.close();
            return (1);
        }
		else
			transcribe_replace(input, output, argv[2], argv[3]);
		input.close();
    	output.close();	
	}
	else
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	return(0);
}