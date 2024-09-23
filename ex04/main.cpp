/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:53:02 by antoda-s          #+#    #+#             */
/*   Updated: 2024/04/24 08:53:02 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <fstream>

void prompt(void)
{
	std::cout << "Invalid command line! To use replace EX04:" << std::endl;
    std::cout << "./replace <filename> <old_string> <new_string>" << std::endl;
	exit(1);
}

std::string readContent(char *filename)
{
	std::string tmp;
	std::string content;
	std::ifstream infile;

	infile.open(filename, std::ios::in);
	if (infile.fail())
	{
		std::cout << "Failed to open '" << filename << "'" << std::endl;
		exit(2);
	}
	while (1)
	{
		std::getline(infile, tmp);
		content += tmp;
		if (infile.eof())
			break;
	}
	infile.close();
	return (content);
}

std::string replaceContent(const std::string &input,
	const std::string &oldString, const std::string &newString)
{
	size_t		newStart;
	size_t		oldStart;
	std::string result;

	oldStart = 0;
	while (1)
	{
		newStart = input.find(oldString, oldStart);
		result += input.substr(oldStart, newStart - oldStart);
		if (newStart == std::string::npos)
			break;
		result += newString;
		oldStart = newStart + oldString.length();
	}
	return (result);
}

void writeContent(const std::string& filename, const std::string &result)
{
	std::ofstream outfile;

	outfile.open((filename + ".replace").c_str(), std::ios::out);
	if (outfile.fail())
	{
		std::cout << "Failed to open '" << filename << "'" << std::endl;
		exit(2);
	}
	outfile << result;
	outfile.close();
}

int main(int argc, char **argv)
{
	if (argc < 4)
		prompt();
	std::string input;
	std::string oldString;
	std::string newString;
	std::string output;

	oldString = argv[2];
	newString = argv[3];

	input = readContent(argv[1]);
	if (oldString != "")
		output = replaceContent(input, oldString, newString);
	else
		for (std::size_t i = 0; i < input.length(); i++)
			output += newString;
	writeContent(argv[1], output);
}