/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:12:59 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/09 11:20:59 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFL_H
# define SFL_H

# include <iostream>
# include <fstream>
# include <string>

int			sed4Dummies(const std::string infile, const std::string s1, const std::string s2);
void		ft_parse(std::ifstream& ifs, std::ofstream&  ofs, const std::string s1, const std::string s2);
std::string	getNextChunk(std::ifstream& ifs);
size_t		ft_replace(std::string& line, const std::string& s1, const std::string& s2);
size_t		recomputeHinge(size_t oldhinge, size_t line_len, size_t s2_len);

#endif
