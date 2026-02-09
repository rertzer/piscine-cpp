/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:25:05 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/09 11:20:41 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfl.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Three arguments required" << std::endl;
		return 1;
	}
	return (sed4Dummies(argv[1], argv[2], argv[3]));
}

int	sed4Dummies(const std::string infile, const std::string s1, const std::string s2)
{
	std::string outfile;
	
	if (s1.empty())
	{
		std::cout << "Sorry, first string can't be empty" << std::endl;
		return 1;
	}
	std::ifstream	ifs(infile.c_str());
	if (!ifs)
	{
		std::cout << "Sorry, can't open " << infile << std::endl;
		return 1;
	}

	outfile = infile + ".replace";
	std::ofstream	ofs(outfile.c_str());
	if (!ofs)
	{
		std::cout << "Sorry, can't open " << outfile << std::endl;
		ifs.close();
		return 1;
	}
	ft_parse(ifs, ofs, s1, s2);
	ifs.close();
	ofs.close();
	return 0;
}

void	ft_parse(std::ifstream& ifs, std::ofstream&  ofs, const std::string s1, const std::string s2)
{
	size_t			hinge;
	std::string		line = "";

	while (true)
	{
		line += getNextChunk(ifs);
		
		hinge = ft_replace(line, s1, s2);
		hinge = recomputeHinge(hinge, line.length(), s2.length());
		ofs << line.substr(0, hinge);
		line = line.substr(hinge);
	if (!ifs)
		break ;
	}
	ofs << line;
}

std::string	getNextChunk(std::ifstream& ifs)
{
	
	size_t const	buffer_size = 1024;		
	char*			buffer = new char [buffer_size];
	std::string		strbuffer;

	for (size_t i = 0 ; i < buffer_size ; i++)
		buffer[i] = '\0';
	ifs.read(buffer, buffer_size);
	strbuffer = (std::string)buffer;
	delete [] buffer;
	strbuffer.resize(ifs.gcount());
	return strbuffer;
}

size_t	ft_replace(std::string& line, const std::string& s1, const std::string& s2)
{
	size_t	start;
	size_t	found;

	start = 0;
	while (true)
	{
		found = line.find(s1, start);
		if (found == std::string::npos)
			break ;
		line.erase(found, s1.length()).insert(found, s2);
		start = found + s2.length();
	}
	return start;
}

size_t	recomputeHinge(size_t oldhinge, size_t line_len, size_t s2_len)
{
	size_t	hinge = 0;

	if (line_len >= s2_len)
			hinge = line_len - s2_len;
	if (oldhinge > hinge)
		hinge = oldhinge;
	return hinge;
}
