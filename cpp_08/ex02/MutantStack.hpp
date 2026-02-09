/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <rertzer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:59:11 by rertzer           #+#    #+#             */
/*   Updated: 2023/06/13 15:13:12 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template<typename T>
class	MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(MutantStack<T> const & ms);
		virtual ~MutantStack();
		MutantStack<T> &	operator=(MutantStack<T> const & rhs);

		typedef typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator	iterator;
		typedef typename container_type::const_iterator	const_iterator;
		typedef typename container_type::reverse_iterator	reverse_iterator;
		typedef typename container_type::const_reverse_iterator	const_reverse_iterator;

		iterator				begin(void) {return this->c.begin();}
		iterator				end(void) {return this->c.end();}
		const_iterator			begin(void) const {return this->c.begin();}
		const_iterator			end(void) const {return this->c.end();}
		reverse_iterator		rbegin(void) {return this->c.rbegin();}
		reverse_iterator		rend(void) {return this->c.rend();}
		const_reverse_iterator	rbegin(void) const {return this->c.rbegin();}
		const_reverse_iterator	rend(void) const {return this->c.rend();}


	private:
};

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const & ms): std::stack<T>(static_cast<std::stack<T> >(ms))
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack<T> const & rhs)
{
	if (this != &rhs)
		static_cast<std::stack<T> >(*this) = static_cast<std::stack<T> >(rhs);
	return (*this);
}
#endif

